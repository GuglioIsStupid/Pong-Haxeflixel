// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphInfo
#include <lime/text/harfbuzz/HBGlyphInfo.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphPosition
#include <lime/text/harfbuzz/HBGlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBSegmentProperties
#include <lime/text/harfbuzz/HBSegmentProperties.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBBuffer_HBBuffer_Impl_
#include <lime/text/harfbuzz/_HBBuffer/HBBuffer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_23__new,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","_new",0x3aec073a,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_._new","lime/text/harfbuzz/HBBuffer.hx",23,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_35_add,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","add",0x218fbe68,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.add","lime/text/harfbuzz/HBBuffer.hx",35,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_42_addCodepoints,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","addCodepoints",0x39493798,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.addCodepoints","lime/text/harfbuzz/HBBuffer.hx",42,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_49_addUTF8,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","addUTF8",0xd1622fb9,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.addUTF8","lime/text/harfbuzz/HBBuffer.hx",49,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_56_addUTF16,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","addUTF16",0x64878c44,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.addUTF16","lime/text/harfbuzz/HBBuffer.hx",56,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_63_addUTF32,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","addUTF32",0x64878dfe,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.addUTF32","lime/text/harfbuzz/HBBuffer.hx",63,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_70_clearContents,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","clearContents",0xa72d92ce,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.clearContents","lime/text/harfbuzz/HBBuffer.hx",70,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_75_getGlyphInfo,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","getGlyphInfo",0x4be6379d,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.getGlyphInfo","lime/text/harfbuzz/HBBuffer.hx",75,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_111_getGlyphPositions,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","getGlyphPositions",0xfdb08a1b,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.getGlyphPositions","lime/text/harfbuzz/HBBuffer.hx",111,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_151_guessSegmentProperties,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","guessSegmentProperties",0xf514c8c8,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.guessSegmentProperties","lime/text/harfbuzz/HBBuffer.hx",151,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_158_normalizeGlyphs,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","normalizeGlyphs",0xb24ee77b,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.normalizeGlyphs","lime/text/harfbuzz/HBBuffer.hx",158,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_165_preallocate,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","preallocate",0x1b877927,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.preallocate","lime/text/harfbuzz/HBBuffer.hx",165,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_174_reset,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","reset",0x3e4ef5d6,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.reset","lime/text/harfbuzz/HBBuffer.hx",174,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_181_reverse,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","reverse",0x628b34e9,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.reverse","lime/text/harfbuzz/HBBuffer.hx",181,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_188_reverseClusters,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","reverseClusters",0x3ba97242,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.reverseClusters","lime/text/harfbuzz/HBBuffer.hx",188,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_196_get_allocationSuccessful,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_allocationSuccessful",0x61fae67c,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_allocationSuccessful","lime/text/harfbuzz/HBBuffer.hx",196,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_205_get_clusterLevel,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_clusterLevel",0x3526900c,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_clusterLevel","lime/text/harfbuzz/HBBuffer.hx",205,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_212_set_clusterLevel,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_clusterLevel",0x8b687d80,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_clusterLevel","lime/text/harfbuzz/HBBuffer.hx",212,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_222_get_contentType,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_contentType",0x1c878ef1,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_contentType","lime/text/harfbuzz/HBBuffer.hx",222,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_229_set_contentType,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_contentType",0x18530bfd,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_contentType","lime/text/harfbuzz/HBBuffer.hx",229,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_239_get_direction,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_direction",0x1650c11d,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_direction","lime/text/harfbuzz/HBBuffer.hx",239,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_246_set_direction,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_direction",0x5b56a329,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_direction","lime/text/harfbuzz/HBBuffer.hx",246,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_256_get_empty,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_empty",0x399e526b,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_empty","lime/text/harfbuzz/HBBuffer.hx",256,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_265_get_flags,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_flags",0xcc504325,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_flags","lime/text/harfbuzz/HBBuffer.hx",265,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_272_set_flags,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_flags",0xafa12f31,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_flags","lime/text/harfbuzz/HBBuffer.hx",272,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_282_get_language,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_language",0xe973273a,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_language","lime/text/harfbuzz/HBBuffer.hx",282,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_289_set_language,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_language",0xfe6c4aae,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_language","lime/text/harfbuzz/HBBuffer.hx",289,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_299_get_length,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_length",0x60d85f48,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_length","lime/text/harfbuzz/HBBuffer.hx",299,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_306_set_length,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_length",0x6455fdbc,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_length","lime/text/harfbuzz/HBBuffer.hx",306,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_316_get_replacementCodepoint,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_replacementCodepoint",0x3688afb3,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_replacementCodepoint","lime/text/harfbuzz/HBBuffer.hx",316,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_323_set_replacementCodepoint,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_replacementCodepoint",0x49633127,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_replacementCodepoint","lime/text/harfbuzz/HBBuffer.hx",323,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_333_get_script,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_script",0x0931186d,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_script","lime/text/harfbuzz/HBBuffer.hx",333,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_340_set_script,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_script",0x0caeb6e1,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_script","lime/text/harfbuzz/HBBuffer.hx",340,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_353_get_segmentProperties,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","get_segmentProperties",0xe843fa64,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.get_segmentProperties","lime/text/harfbuzz/HBBuffer.hx",353,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_361_set_segmentProperties,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","set_segmentProperties",0x3c4cc870,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.set_segmentProperties","lime/text/harfbuzz/HBBuffer.hx",361,0x7e6f757d)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBBuffer{

void HBBuffer_Impl__obj::__construct() { }

Dynamic HBBuffer_Impl__obj::__CreateEmpty() { return new HBBuffer_Impl__obj; }

void *HBBuffer_Impl__obj::_hx_vtable = 0;

Dynamic HBBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBBuffer_Impl__obj > _hx_result = new HBBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56d99e0d;
}

 ::Dynamic HBBuffer_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_23__new)
HXDLIN(  23)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_create()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HBBuffer_Impl__obj,_new,return )

void HBBuffer_Impl__obj::add( ::Dynamic this1,int codepoint,int cluster){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_35_add)
HXDLIN(  35)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_add(::hx::DynamicPtr(this1),codepoint,cluster);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HBBuffer_Impl__obj,add,(void))

void HBBuffer_Impl__obj::addCodepoints( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_42_addCodepoints)
HXDLIN(  42)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_add_codepoints(::hx::DynamicPtr(this1),text,textLength,itemOffset,itemLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBBuffer_Impl__obj,addCodepoints,(void))

void HBBuffer_Impl__obj::addUTF8( ::Dynamic this1,::String text,int itemOffset,int itemLength){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_49_addUTF8)
HXDLIN(  49)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_add_utf8(::hx::DynamicPtr(this1),text,itemOffset,itemLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HBBuffer_Impl__obj,addUTF8,(void))

void HBBuffer_Impl__obj::addUTF16( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_56_addUTF16)
HXDLIN(  56)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_add_utf16(::hx::DynamicPtr(this1),text,textLength,itemOffset,itemLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBBuffer_Impl__obj,addUTF16,(void))

void HBBuffer_Impl__obj::addUTF32( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_63_addUTF32)
HXDLIN(  63)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_add_utf32(::hx::DynamicPtr(this1),text,textLength,itemOffset,itemLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBBuffer_Impl__obj,addUTF32,(void))

void HBBuffer_Impl__obj::clearContents( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_70_clearContents)
HXDLIN(  70)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_clear_contents(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,clearContents,(void))

::Array< ::Dynamic> HBBuffer_Impl__obj::getGlyphInfo( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_0be9af83ebc60cde_75_getGlyphInfo)
HXLINE(  77)		 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc(0);
HXLINE(  78)		bytes = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_glyph_infos(::hx::DynamicPtr(this1),::hx::DynamicPtr(bytes))) );
HXLINE(  80)		if (::hx::IsNull( bytes )) {
HXLINE(  82)			return null();
            		}
            		else {
HXLINE(  86)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE(  88)			int length = bytes->length;
HXLINE(  89)			int position = 0;
HXDLIN(  89)			 ::lime::text::harfbuzz::HBGlyphInfo info;
HXLINE(  91)			while((position < length)){
HXLINE(  93)				info =  ::lime::text::harfbuzz::HBGlyphInfo_obj::__alloc( HX_CTX );
HXLINE(  94)				info->codepoint = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE(  95)				position = (position + 4);
HXLINE(  96)				info->mask = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE(  97)				position = (position + 4);
HXLINE(  98)				info->cluster = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE(  99)				position = (position + 4);
HXLINE( 100)				result->push(info);
            			}
HXLINE( 103)			return result;
            		}
HXLINE(  80)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,getGlyphInfo,return )

::Array< ::Dynamic> HBBuffer_Impl__obj::getGlyphPositions( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_0be9af83ebc60cde_111_getGlyphPositions)
HXLINE( 113)		 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc(0);
HXLINE( 114)		bytes = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_glyph_positions(::hx::DynamicPtr(this1),::hx::DynamicPtr(bytes))) );
HXLINE( 116)		if (::hx::IsNull( bytes )) {
HXLINE( 118)			return null();
            		}
            		else {
HXLINE( 122)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE( 124)			int length = bytes->length;
HXLINE( 125)			int position = 0;
HXDLIN( 125)			 ::lime::text::harfbuzz::HBGlyphPosition glyphPosition;
HXLINE( 127)			while((position < length)){
HXLINE( 129)				glyphPosition =  ::lime::text::harfbuzz::HBGlyphPosition_obj::__alloc( HX_CTX );
HXLINE( 130)				glyphPosition->xAdvance = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 131)				position = (position + 4);
HXLINE( 132)				glyphPosition->yAdvance = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 133)				position = (position + 4);
HXLINE( 134)				glyphPosition->xOffset = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 135)				position = (position + 4);
HXLINE( 136)				glyphPosition->yOffset = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 137)				position = (position + 4);
HXLINE( 138)				result->push(glyphPosition);
            			}
HXLINE( 141)			return result;
            		}
HXLINE( 116)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,getGlyphPositions,return )

void HBBuffer_Impl__obj::guessSegmentProperties( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_151_guessSegmentProperties)
HXDLIN( 151)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_guess_segment_properties(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,guessSegmentProperties,(void))

void HBBuffer_Impl__obj::normalizeGlyphs( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_158_normalizeGlyphs)
HXDLIN( 158)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_normalize_glyphs(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,normalizeGlyphs,(void))

bool HBBuffer_Impl__obj::preallocate( ::Dynamic this1,int size){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_165_preallocate)
HXDLIN( 165)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_preallocate(::hx::DynamicPtr(this1),size);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,preallocate,return )

void HBBuffer_Impl__obj::reset( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_174_reset)
HXDLIN( 174)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_reset(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,reset,(void))

void HBBuffer_Impl__obj::reverse( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_181_reverse)
HXDLIN( 181)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_reverse(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,reverse,(void))

void HBBuffer_Impl__obj::reverseClusters( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_188_reverseClusters)
HXDLIN( 188)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_reverse_clusters(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,reverseClusters,(void))

bool HBBuffer_Impl__obj::get_allocationSuccessful( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_196_get_allocationSuccessful)
HXDLIN( 196)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_allocation_successful(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_allocationSuccessful,return )

int HBBuffer_Impl__obj::get_clusterLevel( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_205_get_clusterLevel)
HXDLIN( 205)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_cluster_level(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_clusterLevel,return )

int HBBuffer_Impl__obj::set_clusterLevel( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_212_set_clusterLevel)
HXLINE( 214)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_cluster_level(::hx::DynamicPtr(this1),value);
HXLINE( 216)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_clusterLevel,return )

int HBBuffer_Impl__obj::get_contentType( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_222_get_contentType)
HXDLIN( 222)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_content_type(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_contentType,return )

int HBBuffer_Impl__obj::set_contentType( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_229_set_contentType)
HXLINE( 231)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_content_type(::hx::DynamicPtr(this1),value);
HXLINE( 233)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_contentType,return )

int HBBuffer_Impl__obj::get_direction( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_239_get_direction)
HXDLIN( 239)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_direction(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_direction,return )

int HBBuffer_Impl__obj::set_direction( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_246_set_direction)
HXLINE( 248)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_direction(::hx::DynamicPtr(this1),value);
HXLINE( 250)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_direction,return )

 ::Dynamic HBBuffer_Impl__obj::get_empty(){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_256_get_empty)
HXDLIN( 256)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_empty()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HBBuffer_Impl__obj,get_empty,return )

int HBBuffer_Impl__obj::get_flags( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_265_get_flags)
HXDLIN( 265)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_flags(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_flags,return )

int HBBuffer_Impl__obj::set_flags( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_272_set_flags)
HXLINE( 274)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_flags(::hx::DynamicPtr(this1),value);
HXLINE( 276)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_flags,return )

 ::Dynamic HBBuffer_Impl__obj::get_language( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_282_get_language)
HXDLIN( 282)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_language(::hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_language,return )

 ::Dynamic HBBuffer_Impl__obj::set_language( ::Dynamic this1, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_289_set_language)
HXLINE( 291)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_language(::hx::DynamicPtr(this1),::hx::DynamicPtr(value));
HXLINE( 293)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_language,return )

int HBBuffer_Impl__obj::get_length( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_299_get_length)
HXDLIN( 299)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_length(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_length,return )

int HBBuffer_Impl__obj::set_length( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_306_set_length)
HXLINE( 308)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_length(::hx::DynamicPtr(this1),value);
HXLINE( 310)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_length,return )

int HBBuffer_Impl__obj::get_replacementCodepoint( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_316_get_replacementCodepoint)
HXDLIN( 316)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_replacement_codepoint(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_replacementCodepoint,return )

int HBBuffer_Impl__obj::set_replacementCodepoint( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_323_set_replacementCodepoint)
HXLINE( 325)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_replacement_codepoint(::hx::DynamicPtr(this1),value);
HXLINE( 327)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_replacementCodepoint,return )

int HBBuffer_Impl__obj::get_script( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_333_get_script)
HXDLIN( 333)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_script(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_script,return )

int HBBuffer_Impl__obj::set_script( ::Dynamic this1,int value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_340_set_script)
HXLINE( 345)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_script(::hx::DynamicPtr(this1),value);
HXLINE( 347)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_script,return )

 ::lime::text::harfbuzz::HBSegmentProperties HBBuffer_Impl__obj::get_segmentProperties( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_353_get_segmentProperties)
HXDLIN( 353)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,get_segmentProperties,return )

 ::lime::text::harfbuzz::HBSegmentProperties HBBuffer_Impl__obj::set_segmentProperties( ::Dynamic this1, ::lime::text::harfbuzz::HBSegmentProperties value){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_361_set_segmentProperties)
HXLINE( 363)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_set_segment_properties(::hx::DynamicPtr(this1),::hx::DynamicPtr(value));
HXLINE( 365)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HBBuffer_Impl__obj,set_segmentProperties,return )


HBBuffer_Impl__obj::HBBuffer_Impl__obj()
{
}

bool HBBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addUTF8") ) { outValue = addUTF8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addUTF16") ) { outValue = addUTF16_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addUTF32") ) { outValue = addUTF32_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_flags") ) { outValue = get_flags_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_flags") ) { outValue = set_flags_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_script") ) { outValue = get_script_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_script") ) { outValue = set_script_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"preallocate") ) { outValue = preallocate_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getGlyphInfo") ) { outValue = getGlyphInfo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_language") ) { outValue = get_language_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_language") ) { outValue = set_language_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addCodepoints") ) { outValue = addCodepoints_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clearContents") ) { outValue = clearContents_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_direction") ) { outValue = get_direction_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_direction") ) { outValue = set_direction_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"normalizeGlyphs") ) { outValue = normalizeGlyphs_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reverseClusters") ) { outValue = reverseClusters_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_contentType") ) { outValue = get_contentType_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_contentType") ) { outValue = set_contentType_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_clusterLevel") ) { outValue = get_clusterLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_clusterLevel") ) { outValue = set_clusterLevel_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getGlyphPositions") ) { outValue = getGlyphPositions_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_segmentProperties") ) { outValue = get_segmentProperties_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_segmentProperties") ) { outValue = set_segmentProperties_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"guessSegmentProperties") ) { outValue = guessSegmentProperties_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_allocationSuccessful") ) { outValue = get_allocationSuccessful_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_replacementCodepoint") ) { outValue = get_replacementCodepoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_replacementCodepoint") ) { outValue = set_replacementCodepoint_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBBuffer_Impl__obj::__mClass;

static ::String HBBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("add",21,f2,49,00),
	HX_("addCodepoints",91,ac,9c,f4),
	HX_("addUTF8",f2,33,d3,89),
	HX_("addUTF16",eb,39,fa,0e),
	HX_("addUTF32",a5,3b,fa,0e),
	HX_("clearContents",c7,07,81,62),
	HX_("getGlyphInfo",c4,44,9e,91),
	HX_("getGlyphPositions",94,6f,94,38),
	HX_("guessSegmentProperties",af,6c,21,7e),
	HX_("normalizeGlyphs",b4,4c,24,81),
	HX_("preallocate",e0,8d,a1,cc),
	HX_("reset",cf,49,c8,e6),
	HX_("reverse",22,39,fc,1a),
	HX_("reverseClusters",7b,d7,7e,0a),
	HX_("get_allocationSuccessful",23,92,65,c2),
	HX_("get_clusterLevel",b3,bc,09,61),
	HX_("set_clusterLevel",27,aa,4b,b7),
	HX_("get_contentType",2a,f4,5c,eb),
	HX_("set_contentType",36,71,28,e7),
	HX_("get_direction",16,36,a4,d1),
	HX_("set_direction",22,18,aa,16),
	HX_("get_empty",e4,96,83,b3),
	HX_("get_flags",9e,87,35,46),
	HX_("set_flags",aa,73,86,29),
	HX_("get_language",61,34,2b,2f),
	HX_("set_language",d5,57,24,44),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("get_replacementCodepoint",5a,5b,f3,96),
	HX_("set_replacementCodepoint",ce,dc,cd,a9),
	HX_("get_script",d4,bd,e7,37),
	HX_("set_script",48,5c,65,3b),
	HX_("get_segmentProperties",5d,90,fa,3e),
	HX_("set_segmentProperties",69,5e,03,93),
	::String(null())
};

void HBBuffer_Impl__obj::__register()
{
	HBBuffer_Impl__obj _hx_dummy;
	HBBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_",35,bd,fe,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBBuffer
