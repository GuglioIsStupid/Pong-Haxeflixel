// Generated by Haxe 4.3.1
#ifndef INCLUDED_lime_utils_TAError
#define INCLUDED_lime_utils_TAError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,TAError)
namespace lime{
namespace utils{


class TAError_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TAError_obj OBJ_;

	public:
		TAError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.utils.TAError",c5,58,89,62); }
		::String __ToString() const { return HX_("TAError.",b3,90,7d,d9) + _hx_tag; }

		static ::lime::utils::TAError RangeError;
		static inline ::lime::utils::TAError RangeError_dyn() { return RangeError; }
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_TAError */ 
