/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jri.h"
#include <stdio.h>

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif


/* Stubs for class netscape/plugin/Plugin */

#ifdef IMPLEMENT_netscape_plugin_Plugin
#define _implementing_netscape_plugin_Plugin
#endif /* IMPLEMENT_netscape_plugin_Plugin */
#define IMPLEMENT_netscape_plugin_Plugin
#include "netscape_plugin_Plugin.h"

#ifndef UNUSED_netscape_plugin_Plugin_peer
JRIFieldID FAR fieldID_netscape_plugin_Plugin_peer = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(jint)
get_netscape_plugin_Plugin_peer(JRIEnv* env, struct netscape_plugin_Plugin* obj) {
	if (fieldID_netscape_plugin_Plugin_peer == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before accessing field peer I");
	}
	return JRI_GetFieldInt(env, obj, fieldID_netscape_plugin_Plugin_peer);
}
JRI_PUBLIC_API(void)
set_netscape_plugin_Plugin_peer(JRIEnv* env, struct netscape_plugin_Plugin* obj, jint v) {
	if (fieldID_netscape_plugin_Plugin_peer == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before accessing field peer I");
	}
	JRI_SetFieldInt(env, obj, fieldID_netscape_plugin_Plugin_peer, v);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_peer */

#ifndef UNUSED_netscape_plugin_Plugin_window
JRIFieldID FAR fieldID_netscape_plugin_Plugin_window = JRIUninitialized;
#ifdef DEBUG
struct netscape_javascript_JSObject;
JRI_PUBLIC_API(struct netscape_javascript_JSObject *)
get_netscape_plugin_Plugin_window(JRIEnv* env, struct netscape_plugin_Plugin* obj) {
	if (fieldID_netscape_plugin_Plugin_window == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before accessing field window Lnetscape/javascript/JSObject;");
	}
	return (struct netscape_javascript_JSObject *)
		JRI_GetField(env, obj, fieldID_netscape_plugin_Plugin_window);
}
JRI_PUBLIC_API(void)
set_netscape_plugin_Plugin_window(JRIEnv* env, struct netscape_plugin_Plugin* obj, struct netscape_javascript_JSObject * v) {
	if (fieldID_netscape_plugin_Plugin_window == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before accessing field window Lnetscape/javascript/JSObject;");
	}
	JRI_SetField(env, obj, fieldID_netscape_plugin_Plugin_window, v);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_window */

#ifndef UNUSED_netscape_plugin_Plugin_getPeer
JRIMethodID FAR methodID_netscape_plugin_Plugin_getPeer = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(jint)
netscape_plugin_Plugin_getPeer(JRIEnv* env, struct netscape_plugin_Plugin* self) {
	if (methodID_netscape_plugin_Plugin_getPeer == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before calling method getPeer ()I");
	}
	return (jint)JRI_CallMethodInt(env)(env, JRI_CallMethod_op, self, methodID_netscape_plugin_Plugin_getPeer);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_getPeer */

#ifndef UNUSED_netscape_plugin_Plugin_init
JRIMethodID FAR methodID_netscape_plugin_Plugin_init = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(void)
netscape_plugin_Plugin_init(JRIEnv* env, struct netscape_plugin_Plugin* self) {
	if (methodID_netscape_plugin_Plugin_init == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before calling method init ()V");
	}
	(void)JRI_CallMethod(env)(env, JRI_CallMethod_op, self, methodID_netscape_plugin_Plugin_init);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_init */

#ifndef UNUSED_netscape_plugin_Plugin_destroy
JRIMethodID FAR methodID_netscape_plugin_Plugin_destroy = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(void)
netscape_plugin_Plugin_destroy(JRIEnv* env, struct netscape_plugin_Plugin* self) {
	if (methodID_netscape_plugin_Plugin_destroy == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before calling method destroy ()V");
	}
	(void)JRI_CallMethod(env)(env, JRI_CallMethod_op, self, methodID_netscape_plugin_Plugin_destroy);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_destroy */

#ifndef UNUSED_netscape_plugin_Plugin_isActive
JRIMethodID FAR methodID_netscape_plugin_Plugin_isActive = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(jbool)
netscape_plugin_Plugin_isActive(JRIEnv* env, struct netscape_plugin_Plugin* self) {
	if (methodID_netscape_plugin_Plugin_isActive == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before calling method isActive ()Z");
	}
	return (jbool)JRI_CallMethodBoolean(env)(env, JRI_CallMethod_op, self, methodID_netscape_plugin_Plugin_isActive);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_isActive */

#ifndef UNUSED_netscape_plugin_Plugin_getWindow
JRIMethodID FAR methodID_netscape_plugin_Plugin_getWindow = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(struct netscape_javascript_JSObject *)
netscape_plugin_Plugin_getWindow(JRIEnv* env, struct netscape_plugin_Plugin* self) {
	if (methodID_netscape_plugin_Plugin_getWindow == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before calling method getWindow ()Lnetscape/javascript/JSObject;");
	}
	return (struct netscape_javascript_JSObject *)JRI_CallMethod(env)(env, JRI_CallMethod_op, self, methodID_netscape_plugin_Plugin_getWindow);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_getWindow */

#ifndef UNUSED_netscape_plugin_Plugin_new
JRIMethodID FAR methodID_netscape_plugin_Plugin_new = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(struct netscape_plugin_Plugin*)
netscape_plugin_Plugin_new(JRIEnv* env, struct java_lang_Class* clazz) {
	if (methodID_netscape_plugin_Plugin_new == JRIUninitialized) {
		assert(!"Forgot to call use_netscape_plugin_Plugin(env) before calling method <init> ()V");
	}
	return (struct netscape_plugin_Plugin*)JRI_NewObject(env)(env, JRI_NewObject_op, clazz, methodID_netscape_plugin_Plugin_new);
}
#endif /* DEBUG */
#endif /* UNUSED_netscape_plugin_Plugin_new */

#ifndef UNUSED_use_netscape_plugin_Plugin

static jglobal _globalclass_netscape_plugin_Plugin = NULL;

JRI_PUBLIC_API(struct java_lang_Class*)
use_netscape_plugin_Plugin(JRIEnv* env)
{
	if (_globalclass_netscape_plugin_Plugin == NULL) {
		struct java_lang_Class* clazz = JRI_FindClass(env, classname_netscape_plugin_Plugin);
		if (clazz == NULL) {
			JRI_ThrowNew(env, JRI_FindClass(env, "java/lang/ClassNotFoundException"), classname_netscape_plugin_Plugin);
			return NULL;
		}
		use_netscape_plugin_Plugin_peer(env, clazz);
		use_netscape_plugin_Plugin_window(env, clazz);
		use_netscape_plugin_Plugin_getPeer(env, clazz);
		use_netscape_plugin_Plugin_init(env, clazz);
		use_netscape_plugin_Plugin_destroy(env, clazz);
		use_netscape_plugin_Plugin_isActive(env, clazz);
		use_netscape_plugin_Plugin_getWindow(env, clazz);
		use_netscape_plugin_Plugin_new(env, clazz);
		_globalclass_netscape_plugin_Plugin = JRI_NewGlobalRef(env, clazz);
		return clazz;
	}
	else {
		return JRI_GetGlobalRef(env, _globalclass_netscape_plugin_Plugin);
	}
}

JRI_PUBLIC_API(void)
unuse_netscape_plugin_Plugin(JRIEnv* env)
{
	if (_globalclass_netscape_plugin_Plugin != NULL) {
		struct java_lang_Class* clazz = JRI_GetGlobalRef(env, _globalclass_netscape_plugin_Plugin);
		unuse_netscape_plugin_Plugin_peer(env, clazz);
		unuse_netscape_plugin_Plugin_window(env, clazz);
		unuse_netscape_plugin_Plugin_getPeer(env, clazz);
		unuse_netscape_plugin_Plugin_init(env, clazz);
		unuse_netscape_plugin_Plugin_destroy(env, clazz);
		unuse_netscape_plugin_Plugin_isActive(env, clazz);
		unuse_netscape_plugin_Plugin_getWindow(env, clazz);
		unuse_netscape_plugin_Plugin_new(env, clazz);
		JRI_DisposeGlobalRef(env, _globalclass_netscape_plugin_Plugin);
		_globalclass_netscape_plugin_Plugin = NULL;
		clazz = NULL;	/* prevent unused variable 'clazz' warning */
	}
}

#endif /* UNUSED_use_netscape_plugin_Plugin */

#ifdef _implementing_netscape_plugin_Plugin

JRI_PUBLIC_API(struct java_lang_Class*)
register_netscape_plugin_Plugin(JRIEnv* env)
{
	char* nativeNamesAndSigs[] = {
		NULL
	};
	void* nativeProcs[] = {
		NULL
	};
	struct java_lang_Class* clazz = JRI_FindClass(env, classname_netscape_plugin_Plugin);
	if (clazz == NULL) {
		JRI_ThrowNew(env, JRI_FindClass(env, "java/lang/ClassNotFoundException"), classname_netscape_plugin_Plugin);
		return NULL;
	}
	JRI_RegisterNatives(env, clazz, nativeNamesAndSigs, nativeProcs);
	use_netscape_plugin_Plugin(env);
	return clazz;
}

JRI_PUBLIC_API(void)
unregister_netscape_plugin_Plugin(JRIEnv* env)
{
	struct java_lang_Class* clazz = JRI_FindClass(env, classname_netscape_plugin_Plugin);
	JRI_UnregisterNatives(env, clazz);
	unuse_netscape_plugin_Plugin(env);
}

#endif /* _implementing_netscape_plugin_Plugin */

/* These stub routines are generated for compatibility with the JDK: */

#ifndef NO_JDK

#endif /* NO_JDK */

