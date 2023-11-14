// Generated by Haxe 4.3.1
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#define INCLUDED_flixel_system_debug_log_LogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4946e010770d7497_56_new)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,log,LogStyle)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{


class HXCPP_CLASS_ATTRIBUTES LogStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LogStyle_obj OBJ_;
		LogStyle_obj();

	public:
		enum { _hx_ClassId = 0x74ec9bed };

		void __construct(::String __o_Prefix,::String __o_Color,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_Bold,::hx::Null< bool >  __o_Italic,::hx::Null< bool >  __o_Underlined,::String ErrorSound,::hx::Null< bool >  __o_OpenConsole, ::Dynamic CallbackFunction);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.log.LogStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.log.LogStyle"); }

		inline static ::hx::ObjectPtr< LogStyle_obj > __new(::String __o_Prefix,::String __o_Color,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_Bold,::hx::Null< bool >  __o_Italic,::hx::Null< bool >  __o_Underlined,::String ErrorSound,::hx::Null< bool >  __o_OpenConsole, ::Dynamic CallbackFunction) {
			::hx::ObjectPtr< LogStyle_obj > __this = new LogStyle_obj();
			__this->__construct(__o_Prefix,__o_Color,__o_Size,__o_Bold,__o_Italic,__o_Underlined,ErrorSound,__o_OpenConsole,CallbackFunction);
			return __this;
		}

		inline static ::hx::ObjectPtr< LogStyle_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_Prefix,::String __o_Color,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_Bold,::hx::Null< bool >  __o_Italic,::hx::Null< bool >  __o_Underlined,::String ErrorSound,::hx::Null< bool >  __o_OpenConsole, ::Dynamic CallbackFunction) {
			LogStyle_obj *__this = (LogStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogStyle_obj), true, "flixel.system.debug.log.LogStyle"));
			*(void **)__this = LogStyle_obj::_hx_vtable;
{
            		::String Prefix = __o_Prefix;
            		if (::hx::IsNull(__o_Prefix)) Prefix = HX_("",00,00,00,00);
            		::String Color = __o_Color;
            		if (::hx::IsNull(__o_Color)) Color = HX_("FFFFFF",c0,27,82,79);
            		int Size = __o_Size.Default(12);
            		bool Bold = __o_Bold.Default(false);
            		bool Italic = __o_Italic.Default(false);
            		bool Underlined = __o_Underlined.Default(false);
            		bool OpenConsole = __o_OpenConsole.Default(false);
            	HX_STACKFRAME(&_hx_pos_4946e010770d7497_56_new)
HXLINE(  57)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->prefix = Prefix;
HXLINE(  58)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->color = Color;
HXLINE(  59)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->size = Size;
HXLINE(  60)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->bold = Bold;
HXLINE(  61)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->italic = Italic;
HXLINE(  62)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->underlined = Underlined;
HXLINE(  63)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->errorSound = ErrorSound;
HXLINE(  64)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->openConsole = OpenConsole;
HXLINE(  65)		( ( ::flixel::_hx_system::debug::log::LogStyle)(__this) )->callbackFunction = CallbackFunction;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LogStyle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LogStyle",2d,9e,d5,48); }

		static void __boot();
		static  ::flixel::_hx_system::debug::log::LogStyle NORMAL;
		static  ::flixel::_hx_system::debug::log::LogStyle WARNING;
		static  ::flixel::_hx_system::debug::log::LogStyle ERROR;
		static  ::flixel::_hx_system::debug::log::LogStyle NOTICE;
		static  ::flixel::_hx_system::debug::log::LogStyle CONSOLE;
		::String prefix;
		::String color;
		int size;
		bool bold;
		bool italic;
		bool underlined;
		::String errorSound;
		bool openConsole;
		 ::Dynamic callbackFunction;
		Dynamic callbackFunction_dyn() { return callbackFunction;}
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log

#endif /* INCLUDED_flixel_system_debug_log_LogStyle */ 
