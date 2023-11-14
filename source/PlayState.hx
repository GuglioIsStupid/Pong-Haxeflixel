package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxPoint;
import flixel.sound.FlxSound;

class PlayState extends FlxState
{
	// left paddle, right paddle, ball
	var paddle1:FlxSprite;
	var paddle2:FlxSprite;
	var ball:FlxSprite;

	var paddleSpeed:Int = 200;
	var ballSpeed:Int = 200;
	var ballVelocity:FlxPoint;
	var ballAngle:Float = 0;
	var ballMoving:Bool = false;

	var paddlehit:FlxSound;
	var death:FlxSound;

	override public function create()
	{
		super.create();

		paddle1 = new FlxSprite().makeGraphic(8, 96, 0xffffffff);
		paddle1.x = 16;
		paddle1.y = (FlxG.height - paddle1.height) / 2;
		add(paddle1);

		paddle2 = new FlxSprite().makeGraphic(8, 96, 0xffffffff);
		paddle2.x = FlxG.width - paddle2.width - 16;
		paddle2.y = (FlxG.height - paddle2.height) / 2;
		add(paddle2);

		ball = new FlxSprite().makeGraphic(8, 8, 0xffffffff);
		ball.x = (FlxG.width - ball.width) / 2;
		ball.y = (FlxG.height - ball.height) / 2;
		add(ball);

		paddlehit = FlxG.sound.load(AssetPaths.paddlehit__wav);
		death = FlxG.sound.load(AssetPaths.death__wav);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		// left paddle
		if (FlxG.keys.pressed.W)
		{
			paddle1.y -= paddleSpeed * elapsed;
		}
		if (FlxG.keys.pressed.S)
		{
			paddle1.y += paddleSpeed * elapsed;
		}

		// right paddle is automated (move to center of ball)
		if (ballMoving && ballVelocity.x > 0)
		{
			if (paddle2.y + paddle2.height / 2 < ball.y + ball.height / 2)
			{
				paddle2.y += paddleSpeed * elapsed;
			}
			else if (paddle2.y + paddle2.height / 2 > ball.y + ball.height / 2)
			{
				paddle2.y -= paddleSpeed * elapsed;
			}
		}

		// stop from going off screen
		// paddle1
		if (paddle1.y < 0)
		{
			paddle1.y = 0;
		}
		else if (paddle1.y + paddle1.height > FlxG.height)
		{
			paddle1.y = FlxG.height - paddle1.height;
		}
		// paddle2
		if (paddle2.y < 0)
		{
			paddle2.y = 0;
		}
		else if (paddle2.y + paddle2.height > FlxG.height)
		{
			paddle2.y = FlxG.height - paddle2.height;
		}

		// ball
		if (ballMoving)
		{
			ball.x += ballVelocity.x * elapsed;
			ball.y += ballVelocity.y * elapsed;

			// bounce off top and bottom
			if (ball.y < 0)
			{
				ball.y = 0;
				ballVelocity.y *= -1;
			}
			else if (ball.y + ball.height > FlxG.height)
			{
				ball.y = FlxG.height - ball.height;
				ballVelocity.y *= -1;
			}

			// bounce off paddles
			if (ball.overlaps(paddle1))
			{
				ball.x = paddle1.x + paddle1.width;
				ballVelocity.x *= -1;
				paddlehit.play();
			}
			else if (ball.overlaps(paddle2))
			{
				ball.x = paddle2.x - ball.width;
				ballVelocity.x *= -1;
				paddlehit.play();
			}

			// score
			if (ball.x < 0)
			{
				ballMoving = false;
				ball.x = (FlxG.width - ball.width) / 2;
				ball.y = (FlxG.height - ball.height) / 2;
				ballVelocity.x *= -1;
				death.play();
			}
			else if (ball.x + ball.width > FlxG.width)
			{
				ballMoving = false;
				ball.x = (FlxG.width - ball.width) / 2;
				ball.y = (FlxG.height - ball.height) / 2;
				ballVelocity.x *= -1;
				death.play();
			}
		}
		else
		{
			if (FlxG.keys.justPressed.SPACE)
			{
				ballMoving = true;
				ballAngle = Math.random() * Math.PI * 2;
				ballVelocity = new FlxPoint(Math.cos(ballAngle), Math.sin(ballAngle));
				ballVelocity.x *= ballSpeed;
				ballVelocity.y *= ballSpeed;
			}
		}
	}
}
