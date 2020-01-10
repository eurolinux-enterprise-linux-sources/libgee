/* unfolditerator.c generated by valac 0.34.0.46-213c, the Vala compiler
 * generated from unfolditerator.vala, do not modify */

/* unfolditerator.vala
 *
 * Copyright (C) 2011  Maciej Piechotka
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Maciej Piechotka <uzytkownik2@gmail.com>
 */

#include <glib.h>
#include <glib-object.h>


#define GEE_TYPE_TRAVERSABLE (gee_traversable_get_type ())
#define GEE_TRAVERSABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TRAVERSABLE, GeeTraversable))
#define GEE_IS_TRAVERSABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TRAVERSABLE))
#define GEE_TRAVERSABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_TRAVERSABLE, GeeTraversableIface))

typedef struct _GeeTraversable GeeTraversable;
typedef struct _GeeTraversableIface GeeTraversableIface;

#define GEE_TRAVERSABLE_TYPE_STREAM (gee_traversable_stream_get_type ())

#define GEE_TYPE_LAZY (gee_lazy_get_type ())
#define GEE_LAZY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_LAZY, GeeLazy))
#define GEE_LAZY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_LAZY, GeeLazyClass))
#define GEE_IS_LAZY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_LAZY))
#define GEE_IS_LAZY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_LAZY))
#define GEE_LAZY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_LAZY, GeeLazyClass))

typedef struct _GeeLazy GeeLazy;
typedef struct _GeeLazyClass GeeLazyClass;

#define GEE_TYPE_ITERATOR (gee_iterator_get_type ())
#define GEE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERATOR, GeeIterator))
#define GEE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERATOR))
#define GEE_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERATOR, GeeIteratorIface))

typedef struct _GeeIterator GeeIterator;
typedef struct _GeeIteratorIface GeeIteratorIface;

#define GEE_TYPE_UNFOLD_ITERATOR (gee_unfold_iterator_get_type ())
#define GEE_UNFOLD_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIterator))
#define GEE_UNFOLD_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIteratorClass))
#define GEE_IS_UNFOLD_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_UNFOLD_ITERATOR))
#define GEE_IS_UNFOLD_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_UNFOLD_ITERATOR))
#define GEE_UNFOLD_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIteratorClass))

typedef struct _GeeUnfoldIterator GeeUnfoldIterator;
typedef struct _GeeUnfoldIteratorClass GeeUnfoldIteratorClass;
typedef struct _GeeUnfoldIteratorPrivate GeeUnfoldIteratorPrivate;
#define _gee_lazy_unref0(var) ((var == NULL) ? NULL : (var = (gee_lazy_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

typedef gboolean (*GeeForallFunc) (gpointer g, void* user_data);
typedef enum  {
	GEE_TRAVERSABLE_STREAM_YIELD,
	GEE_TRAVERSABLE_STREAM_CONTINUE,
	GEE_TRAVERSABLE_STREAM_END,
	GEE_TRAVERSABLE_STREAM_WAIT
} GeeTraversableStream;

typedef GeeTraversableStream (*GeeStreamFunc) (GeeTraversableStream state, GeeLazy* g, GeeLazy** lazy, void* user_data);
struct _GeeIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (GeeIterator* self);
	gboolean (*has_next) (GeeIterator* self);
	gpointer (*get) (GeeIterator* self);
	void (*remove) (GeeIterator* self);
	gboolean (*get_valid) (GeeIterator* self);
	gboolean (*get_read_only) (GeeIterator* self);
};

typedef gpointer (*GeeFoldFunc) (gpointer g, gpointer a, void* user_data);
typedef gpointer (*GeeMapFunc) (gpointer g, void* user_data);
typedef gboolean (*GeePredicate) (gconstpointer g, void* user_data);
typedef GeeIterator* (*GeeFlatMapFunc) (gpointer g, void* user_data);
struct _GeeTraversableIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeTraversable* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeTraversable* self);
	GDestroyNotify (*get_g_destroy_func) (GeeTraversable* self);
	gboolean (*foreach) (GeeTraversable* self, GeeForallFunc f, void* f_target);
	GeeIterator* (*stream) (GeeTraversable* self, GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeStreamFunc f, void* f_target, GDestroyNotify f_target_destroy_notify);
	gpointer (*fold) (GeeTraversable* self, GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeFoldFunc f, void* f_target, gpointer seed);
	GeeIterator* (*map) (GeeTraversable* self, GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeMapFunc f, void* f_target);
	GeeIterator* (*scan) (GeeTraversable* self, GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeFoldFunc f, void* f_target, gpointer seed);
	GeeIterator* (*filter) (GeeTraversable* self, GeePredicate pred, void* pred_target, GDestroyNotify pred_target_destroy_notify);
	GeeIterator* (*chop) (GeeTraversable* self, gint offset, gint length);
	GType (*get_element_type) (GeeTraversable* self);
	GeeIterator* (*flat_map) (GeeTraversable* self, GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeFlatMapFunc f, void* f_target, GDestroyNotify f_target_destroy_notify);
	GeeIterator** (*tee) (GeeTraversable* self, guint forks, int* result_length1);
};

struct _GeeUnfoldIterator {
	GObject parent_instance;
	GeeUnfoldIteratorPrivate * priv;
};

struct _GeeUnfoldIteratorClass {
	GObjectClass parent_class;
};

typedef GeeLazy* (*GeeUnfoldFunc) (void* user_data);
struct _GeeUnfoldIteratorPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeUnfoldFunc _func;
	gpointer _func_target;
	GDestroyNotify _func_target_destroy_notify;
	GeeLazy* _current;
	GeeLazy* _next;
	gboolean _end;
};


static gpointer gee_unfold_iterator_parent_class = NULL;
static GeeTraversableIface* gee_unfold_iterator_gee_traversable_parent_iface = NULL;
static GeeIteratorIface* gee_unfold_iterator_gee_iterator_parent_iface = NULL;

GType gee_traversable_stream_get_type (void) G_GNUC_CONST;
gpointer gee_lazy_ref (gpointer instance);
void gee_lazy_unref (gpointer instance);
GParamSpec* gee_param_spec_lazy (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void gee_value_set_lazy (GValue* value, gpointer v_object);
void gee_value_take_lazy (GValue* value, gpointer v_object);
gpointer gee_value_get_lazy (const GValue* value);
GType gee_lazy_get_type (void) G_GNUC_CONST;
GType gee_iterator_get_type (void) G_GNUC_CONST;
GType gee_traversable_get_type (void) G_GNUC_CONST;
G_GNUC_INTERNAL GType gee_unfold_iterator_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
#define GEE_UNFOLD_ITERATOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIteratorPrivate))
enum  {
	GEE_UNFOLD_ITERATOR_DUMMY_PROPERTY,
	GEE_UNFOLD_ITERATOR_G_TYPE,
	GEE_UNFOLD_ITERATOR_G_DUP_FUNC,
	GEE_UNFOLD_ITERATOR_G_DESTROY_FUNC,
	GEE_UNFOLD_ITERATOR_VALID,
	GEE_UNFOLD_ITERATOR_READ_ONLY
};
G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeUnfoldFunc func, void* func_target, GDestroyNotify func_target_destroy_notify, GeeLazy* current);
G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeUnfoldFunc func, void* func_target, GDestroyNotify func_target_destroy_notify, GeeLazy* current);
static gboolean gee_unfold_iterator_real_next (GeeIterator* base);
gboolean gee_iterator_has_next (GeeIterator* self);
void gee_lazy_eval (GeeLazy* self);
static gboolean gee_unfold_iterator_real_has_next (GeeIterator* base);
static gpointer gee_unfold_iterator_real_get (GeeIterator* base);
gconstpointer gee_lazy_get_value (GeeLazy* self);
static void gee_unfold_iterator_real_remove (GeeIterator* base);
static gboolean gee_unfold_iterator_real_foreach (GeeTraversable* base, GeeForallFunc f, void* f_target);
static void gee_unfold_iterator_finalize (GObject* obj);
gboolean gee_iterator_get_valid (GeeIterator* self);
gboolean gee_iterator_get_read_only (GeeIterator* self);
static void _vala_gee_unfold_iterator_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gee_unfold_iterator_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeUnfoldFunc func, void* func_target, GDestroyNotify func_target_destroy_notify, GeeLazy* current) {
	GeeUnfoldIterator * self = NULL;
	GeeLazy* _tmp0_ = NULL;
	GeeUnfoldFunc _tmp1_ = NULL;
	void* _tmp1__target = NULL;
	GDestroyNotify _tmp1__target_destroy_notify = NULL;
	self = (GeeUnfoldIterator*) g_object_new (object_type, NULL);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	_tmp0_ = current;
	current = NULL;
	_gee_lazy_unref0 (self->priv->_current);
	self->priv->_current = _tmp0_;
	_tmp1_ = func;
	_tmp1__target = func_target;
	_tmp1__target_destroy_notify = func_target_destroy_notify;
	func_target_destroy_notify = NULL;
	(self->priv->_func_target_destroy_notify == NULL) ? NULL : (self->priv->_func_target_destroy_notify (self->priv->_func_target), NULL);
	self->priv->_func = NULL;
	self->priv->_func_target = NULL;
	self->priv->_func_target_destroy_notify = NULL;
	self->priv->_func = _tmp1_;
	self->priv->_func_target = _tmp1__target;
	self->priv->_func_target_destroy_notify = _tmp1__target_destroy_notify;
	self->priv->_end = FALSE;
	(func_target_destroy_notify == NULL) ? NULL : (func_target_destroy_notify (func_target), NULL);
	func = NULL;
	func_target = NULL;
	func_target_destroy_notify = NULL;
	_gee_lazy_unref0 (current);
	return self;
}


G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeUnfoldFunc func, void* func_target, GDestroyNotify func_target_destroy_notify, GeeLazy* current) {
	return gee_unfold_iterator_construct (GEE_TYPE_UNFOLD_ITERATOR, g_type, g_dup_func, g_destroy_func, func, func_target, func_target_destroy_notify, current);
}


static gboolean gee_unfold_iterator_real_next (GeeIterator* base) {
	GeeUnfoldIterator * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	self = (GeeUnfoldIterator*) base;
	_tmp0_ = gee_iterator_has_next ((GeeIterator*) self);
	if (_tmp0_) {
		GeeLazy* _tmp1_ = NULL;
		GeeLazy* _tmp3_ = NULL;
		_tmp1_ = self->priv->_current;
		if (_tmp1_ != NULL) {
			GeeLazy* _tmp2_ = NULL;
			_tmp2_ = self->priv->_current;
			gee_lazy_eval (_tmp2_);
		}
		_tmp3_ = self->priv->_next;
		self->priv->_next = NULL;
		_gee_lazy_unref0 (self->priv->_current);
		self->priv->_current = _tmp3_;
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


static gboolean gee_unfold_iterator_real_has_next (GeeIterator* base) {
	GeeUnfoldIterator * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	GeeLazy* _tmp1_ = NULL;
	GeeUnfoldFunc _tmp2_ = NULL;
	void* _tmp2__target = NULL;
	GeeLazy* _tmp3_ = NULL;
	GeeLazy* _tmp4_ = NULL;
	GeeLazy* _tmp5_ = NULL;
	self = (GeeUnfoldIterator*) base;
	_tmp0_ = self->priv->_end;
	if (_tmp0_) {
		result = FALSE;
		return result;
	}
	_tmp1_ = self->priv->_next;
	if (_tmp1_ != NULL) {
		result = TRUE;
		return result;
	}
	_tmp2_ = self->priv->_func;
	_tmp2__target = self->priv->_func_target;
	_tmp3_ = _tmp2_ (_tmp2__target);
	_gee_lazy_unref0 (self->priv->_next);
	self->priv->_next = _tmp3_;
	_tmp4_ = self->priv->_next;
	if (_tmp4_ == NULL) {
		self->priv->_end = TRUE;
	}
	_tmp5_ = self->priv->_next;
	result = _tmp5_ != NULL;
	return result;
}


static gpointer gee_unfold_iterator_real_get (GeeIterator* base) {
	GeeUnfoldIterator * self;
	gpointer result = NULL;
	GeeLazy* _tmp0_ = NULL;
	GeeLazy* _tmp1_ = NULL;
	gconstpointer _tmp2_ = NULL;
	gconstpointer _tmp3_ = NULL;
	gpointer _tmp4_ = NULL;
	self = (GeeUnfoldIterator*) base;
	_tmp0_ = self->priv->_current;
	_vala_assert (_tmp0_ != NULL, "_current != null");
	_tmp1_ = self->priv->_current;
	_tmp2_ = gee_lazy_get_value (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = ((_tmp3_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp3_) : ((gpointer) _tmp3_);
	result = _tmp4_;
	return result;
}


static void gee_unfold_iterator_real_remove (GeeIterator* base) {
	GeeUnfoldIterator * self;
	self = (GeeUnfoldIterator*) base;
	g_assert_not_reached ();
}


static gboolean gee_unfold_iterator_real_foreach (GeeTraversable* base, GeeForallFunc f, void* f_target) {
	GeeUnfoldIterator * self;
	gboolean result = FALSE;
	GeeLazy* _tmp0_ = NULL;
	GeeLazy* _tmp7_ = NULL;
	GeeLazy* _tmp16_ = NULL;
	self = (GeeUnfoldIterator*) base;
	_tmp0_ = self->priv->_current;
	if (_tmp0_ != NULL) {
		GeeForallFunc _tmp1_ = NULL;
		void* _tmp1__target = NULL;
		GeeLazy* _tmp2_ = NULL;
		gconstpointer _tmp3_ = NULL;
		gconstpointer _tmp4_ = NULL;
		gpointer _tmp5_ = NULL;
		gboolean _tmp6_ = FALSE;
		_tmp1_ = f;
		_tmp1__target = f_target;
		_tmp2_ = self->priv->_current;
		_tmp3_ = gee_lazy_get_value (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp5_ = ((_tmp4_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp4_) : ((gpointer) _tmp4_);
		_tmp6_ = _tmp1_ (_tmp5_, _tmp1__target);
		if (!_tmp6_) {
			result = FALSE;
			return result;
		}
	}
	_tmp7_ = self->priv->_next;
	if (_tmp7_ != NULL) {
		GeeLazy* _tmp8_ = NULL;
		GeeForallFunc _tmp9_ = NULL;
		void* _tmp9__target = NULL;
		GeeLazy* _tmp10_ = NULL;
		gconstpointer _tmp11_ = NULL;
		gconstpointer _tmp12_ = NULL;
		gpointer _tmp13_ = NULL;
		gboolean _tmp14_ = FALSE;
		_tmp8_ = self->priv->_next;
		self->priv->_next = NULL;
		_gee_lazy_unref0 (self->priv->_current);
		self->priv->_current = _tmp8_;
		_tmp9_ = f;
		_tmp9__target = f_target;
		_tmp10_ = self->priv->_current;
		_tmp11_ = gee_lazy_get_value (_tmp10_);
		_tmp12_ = _tmp11_;
		_tmp13_ = ((_tmp12_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp12_) : ((gpointer) _tmp12_);
		_tmp14_ = _tmp9_ (_tmp13_, _tmp9__target);
		if (!_tmp14_) {
			result = FALSE;
			return result;
		}
	} else {
		gboolean _tmp15_ = FALSE;
		_tmp15_ = self->priv->_end;
		if (_tmp15_) {
			result = TRUE;
			return result;
		}
	}
	_tmp16_ = self->priv->_current;
	if (_tmp16_ == NULL) {
		GeeUnfoldFunc _tmp17_ = NULL;
		void* _tmp17__target = NULL;
		GeeLazy* _tmp18_ = NULL;
		GeeLazy* _tmp19_ = NULL;
		_tmp17_ = self->priv->_func;
		_tmp17__target = self->priv->_func_target;
		_tmp18_ = _tmp17_ (_tmp17__target);
		_gee_lazy_unref0 (self->priv->_current);
		self->priv->_current = _tmp18_;
		_tmp19_ = self->priv->_current;
		if (_tmp19_ == NULL) {
			self->priv->_end = TRUE;
			result = TRUE;
			return result;
		} else {
			GeeForallFunc _tmp20_ = NULL;
			void* _tmp20__target = NULL;
			GeeLazy* _tmp21_ = NULL;
			gconstpointer _tmp22_ = NULL;
			gconstpointer _tmp23_ = NULL;
			gpointer _tmp24_ = NULL;
			gboolean _tmp25_ = FALSE;
			_tmp20_ = f;
			_tmp20__target = f_target;
			_tmp21_ = self->priv->_current;
			_tmp22_ = gee_lazy_get_value (_tmp21_);
			_tmp23_ = _tmp22_;
			_tmp24_ = ((_tmp23_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp23_) : ((gpointer) _tmp23_);
			_tmp25_ = _tmp20_ (_tmp24_, _tmp20__target);
			if (!_tmp25_) {
				result = FALSE;
				return result;
			}
		}
	}
	while (TRUE) {
		GeeUnfoldFunc _tmp26_ = NULL;
		void* _tmp26__target = NULL;
		GeeLazy* _tmp27_ = NULL;
		GeeLazy* _tmp28_ = NULL;
		GeeLazy* _tmp29_ = NULL;
		GeeForallFunc _tmp30_ = NULL;
		void* _tmp30__target = NULL;
		GeeLazy* _tmp31_ = NULL;
		gconstpointer _tmp32_ = NULL;
		gconstpointer _tmp33_ = NULL;
		gpointer _tmp34_ = NULL;
		gboolean _tmp35_ = FALSE;
		_tmp26_ = self->priv->_func;
		_tmp26__target = self->priv->_func_target;
		_tmp27_ = _tmp26_ (_tmp26__target);
		_gee_lazy_unref0 (self->priv->_next);
		self->priv->_next = _tmp27_;
		_tmp28_ = self->priv->_next;
		if (!(_tmp28_ != NULL)) {
			break;
		}
		_tmp29_ = self->priv->_next;
		self->priv->_next = NULL;
		_gee_lazy_unref0 (self->priv->_current);
		self->priv->_current = _tmp29_;
		_tmp30_ = f;
		_tmp30__target = f_target;
		_tmp31_ = self->priv->_current;
		_tmp32_ = gee_lazy_get_value (_tmp31_);
		_tmp33_ = _tmp32_;
		_tmp34_ = ((_tmp33_ != NULL) && (self->priv->g_dup_func != NULL)) ? self->priv->g_dup_func ((gpointer) _tmp33_) : ((gpointer) _tmp33_);
		_tmp35_ = _tmp30_ (_tmp34_, _tmp30__target);
		if (!_tmp35_) {
			result = FALSE;
			return result;
		}
	}
	self->priv->_end = TRUE;
	result = TRUE;
	return result;
}


static gboolean gee_unfold_iterator_real_get_valid (GeeIterator* base) {
	gboolean result;
	GeeUnfoldIterator* self;
	GeeLazy* _tmp0_ = NULL;
	self = (GeeUnfoldIterator*) base;
	_tmp0_ = self->priv->_current;
	result = _tmp0_ != NULL;
	return result;
}


static gboolean gee_unfold_iterator_real_get_read_only (GeeIterator* base) {
	gboolean result;
	GeeUnfoldIterator* self;
	self = (GeeUnfoldIterator*) base;
	result = TRUE;
	return result;
}


static void gee_unfold_iterator_class_init (GeeUnfoldIteratorClass * klass) {
	gee_unfold_iterator_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeeUnfoldIteratorPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_unfold_iterator_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_unfold_iterator_set_property;
	G_OBJECT_CLASS (klass)->finalize = gee_unfold_iterator_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_UNFOLD_ITERATOR_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_UNFOLD_ITERATOR_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_UNFOLD_ITERATOR_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_UNFOLD_ITERATOR_VALID, g_param_spec_boolean ("valid", "valid", "valid", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_UNFOLD_ITERATOR_READ_ONLY, g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static GType gee_unfold_iterator_gee_traversable_get_g_type (GeeUnfoldIterator* self) {
	return self->priv->g_type;
}


static GBoxedCopyFunc gee_unfold_iterator_gee_traversable_get_g_dup_func (GeeUnfoldIterator* self) {
	return self->priv->g_dup_func;
}


static GDestroyNotify gee_unfold_iterator_gee_traversable_get_g_destroy_func (GeeUnfoldIterator* self) {
	return self->priv->g_destroy_func;
}


static void gee_unfold_iterator_gee_traversable_interface_init (GeeTraversableIface * iface) {
	gee_unfold_iterator_gee_traversable_parent_iface = g_type_interface_peek_parent (iface);
	iface->foreach = (gboolean (*)(GeeTraversable*, GeeForallFunc, void*)) gee_unfold_iterator_real_foreach;
	iface->get_g_type = (GType(*)(GeeTraversable*)) gee_unfold_iterator_gee_traversable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeTraversable*)) gee_unfold_iterator_gee_traversable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeTraversable*)) gee_unfold_iterator_gee_traversable_get_g_destroy_func;
}


static void gee_unfold_iterator_gee_iterator_interface_init (GeeIteratorIface * iface) {
	gee_unfold_iterator_gee_iterator_parent_iface = g_type_interface_peek_parent (iface);
	iface->next = (gboolean (*)(GeeIterator*)) gee_unfold_iterator_real_next;
	iface->has_next = (gboolean (*)(GeeIterator*)) gee_unfold_iterator_real_has_next;
	iface->get = (gpointer (*)(GeeIterator*)) gee_unfold_iterator_real_get;
	iface->remove = (void (*)(GeeIterator*)) gee_unfold_iterator_real_remove;
	iface->get_valid = gee_unfold_iterator_real_get_valid;
	iface->get_read_only = gee_unfold_iterator_real_get_read_only;
}


static void gee_unfold_iterator_instance_init (GeeUnfoldIterator * self) {
	self->priv = GEE_UNFOLD_ITERATOR_GET_PRIVATE (self);
}


static void gee_unfold_iterator_finalize (GObject* obj) {
	GeeUnfoldIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIterator);
	(self->priv->_func_target_destroy_notify == NULL) ? NULL : (self->priv->_func_target_destroy_notify (self->priv->_func_target), NULL);
	self->priv->_func = NULL;
	self->priv->_func_target = NULL;
	self->priv->_func_target_destroy_notify = NULL;
	_gee_lazy_unref0 (self->priv->_current);
	_gee_lazy_unref0 (self->priv->_next);
	G_OBJECT_CLASS (gee_unfold_iterator_parent_class)->finalize (obj);
}


G_GNUC_INTERNAL GType gee_unfold_iterator_get_type (void) {
	static volatile gsize gee_unfold_iterator_type_id__volatile = 0;
	if (g_once_init_enter (&gee_unfold_iterator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeUnfoldIteratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_unfold_iterator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeUnfoldIterator), 0, (GInstanceInitFunc) gee_unfold_iterator_instance_init, NULL };
		static const GInterfaceInfo gee_traversable_info = { (GInterfaceInitFunc) gee_unfold_iterator_gee_traversable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo gee_iterator_info = { (GInterfaceInitFunc) gee_unfold_iterator_gee_iterator_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType gee_unfold_iterator_type_id;
		gee_unfold_iterator_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeUnfoldIterator", &g_define_type_info, 0);
		g_type_add_interface_static (gee_unfold_iterator_type_id, GEE_TYPE_TRAVERSABLE, &gee_traversable_info);
		g_type_add_interface_static (gee_unfold_iterator_type_id, GEE_TYPE_ITERATOR, &gee_iterator_info);
		g_once_init_leave (&gee_unfold_iterator_type_id__volatile, gee_unfold_iterator_type_id);
	}
	return gee_unfold_iterator_type_id__volatile;
}


static void _vala_gee_unfold_iterator_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GeeUnfoldIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIterator);
	switch (property_id) {
		case GEE_UNFOLD_ITERATOR_VALID:
		g_value_set_boolean (value, gee_iterator_get_valid ((GeeIterator*) self));
		break;
		case GEE_UNFOLD_ITERATOR_READ_ONLY:
		g_value_set_boolean (value, gee_iterator_get_read_only ((GeeIterator*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_gee_unfold_iterator_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GeeUnfoldIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIterator);
	switch (property_id) {
		case GEE_UNFOLD_ITERATOR_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_UNFOLD_ITERATOR_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_UNFOLD_ITERATOR_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



