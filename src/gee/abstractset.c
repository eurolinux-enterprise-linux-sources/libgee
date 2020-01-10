/* abstractset.c generated by valac 0.34.0.46-213c, the Vala compiler
 * generated from abstractset.vala, do not modify */

/* abstractset.vala
 *
 * Copyright (C) 2007  Jürg Billeter
 * Copyright (C) 2009  Didier Villevalois
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
 * 	Julien Peeters <contact@julienpeeters.fr>
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

#define GEE_TYPE_ITERABLE (gee_iterable_get_type ())
#define GEE_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERABLE, GeeIterable))
#define GEE_IS_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERABLE))
#define GEE_ITERABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERABLE, GeeIterableIface))

typedef struct _GeeIterable GeeIterable;
typedef struct _GeeIterableIface GeeIterableIface;

#define GEE_TYPE_COLLECTION (gee_collection_get_type ())
#define GEE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_COLLECTION, GeeCollection))
#define GEE_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_COLLECTION))
#define GEE_COLLECTION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_COLLECTION, GeeCollectionIface))

typedef struct _GeeCollection GeeCollection;
typedef struct _GeeCollectionIface GeeCollectionIface;

#define GEE_TYPE_ABSTRACT_COLLECTION (gee_abstract_collection_get_type ())
#define GEE_ABSTRACT_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollection))
#define GEE_ABSTRACT_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollectionClass))
#define GEE_IS_ABSTRACT_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_COLLECTION))
#define GEE_IS_ABSTRACT_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_COLLECTION))
#define GEE_ABSTRACT_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollectionClass))

typedef struct _GeeAbstractCollection GeeAbstractCollection;
typedef struct _GeeAbstractCollectionClass GeeAbstractCollectionClass;
typedef struct _GeeAbstractCollectionPrivate GeeAbstractCollectionPrivate;

#define GEE_TYPE_SET (gee_set_get_type ())
#define GEE_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_SET, GeeSet))
#define GEE_IS_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_SET))
#define GEE_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_SET, GeeSetIface))

typedef struct _GeeSet GeeSet;
typedef struct _GeeSetIface GeeSetIface;

#define GEE_TYPE_ABSTRACT_SET (gee_abstract_set_get_type ())
#define GEE_ABSTRACT_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_SET, GeeAbstractSet))
#define GEE_ABSTRACT_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_SET, GeeAbstractSetClass))
#define GEE_IS_ABSTRACT_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_SET))
#define GEE_IS_ABSTRACT_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_SET))
#define GEE_ABSTRACT_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_SET, GeeAbstractSetClass))

typedef struct _GeeAbstractSet GeeAbstractSet;
typedef struct _GeeAbstractSetClass GeeAbstractSetClass;
typedef struct _GeeAbstractSetPrivate GeeAbstractSetPrivate;

#define GEE_TYPE_READ_ONLY_COLLECTION (gee_read_only_collection_get_type ())
#define GEE_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollection))
#define GEE_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))
#define GEE_IS_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_IS_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_READ_ONLY_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))

typedef struct _GeeReadOnlyCollection GeeReadOnlyCollection;
typedef struct _GeeReadOnlyCollectionClass GeeReadOnlyCollectionClass;

#define GEE_TYPE_READ_ONLY_SET (gee_read_only_set_get_type ())
#define GEE_READ_ONLY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_SET, GeeReadOnlySet))
#define GEE_READ_ONLY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_SET, GeeReadOnlySetClass))
#define GEE_IS_READ_ONLY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_SET))
#define GEE_IS_READ_ONLY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_SET))
#define GEE_READ_ONLY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_SET, GeeReadOnlySetClass))

typedef struct _GeeReadOnlySet GeeReadOnlySet;
typedef struct _GeeReadOnlySetClass GeeReadOnlySetClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

struct _GeeIterableIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeIterable* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeIterable* self);
	GDestroyNotify (*get_g_destroy_func) (GeeIterable* self);
	GeeIterator* (*iterator) (GeeIterable* self);
};

struct _GeeCollectionIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeCollection* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeCollection* self);
	GDestroyNotify (*get_g_destroy_func) (GeeCollection* self);
	gboolean (*contains) (GeeCollection* self, gconstpointer item);
	gboolean (*add) (GeeCollection* self, gconstpointer item);
	gboolean (*remove) (GeeCollection* self, gconstpointer item);
	void (*clear) (GeeCollection* self);
	gboolean (*add_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*contains_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*remove_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*retain_all) (GeeCollection* self, GeeCollection* collection);
	gpointer* (*to_array) (GeeCollection* self, int* result_length1);
	gint (*get_size) (GeeCollection* self);
	gboolean (*get_is_empty) (GeeCollection* self);
	gboolean (*get_read_only) (GeeCollection* self);
	GeeCollection* (*get_read_only_view) (GeeCollection* self);
	gboolean (*add_all_array) (GeeCollection* self, gpointer* array, int array_length1);
	gboolean (*contains_all_array) (GeeCollection* self, gpointer* array, int array_length1);
	gboolean (*remove_all_array) (GeeCollection* self, gpointer* array, int array_length1);
	gboolean (*add_all_iterator) (GeeCollection* self, GeeIterator* iter);
	gboolean (*contains_all_iterator) (GeeCollection* self, GeeIterator* iter);
	gboolean (*remove_all_iterator) (GeeCollection* self, GeeIterator* iter);
};

struct _GeeAbstractCollection {
	GObject parent_instance;
	GeeAbstractCollectionPrivate * priv;
};

struct _GeeAbstractCollectionClass {
	GObjectClass parent_class;
	gboolean (*contains) (GeeAbstractCollection* self, gconstpointer item);
	gboolean (*add) (GeeAbstractCollection* self, gconstpointer item);
	gboolean (*remove) (GeeAbstractCollection* self, gconstpointer item);
	void (*clear) (GeeAbstractCollection* self);
	GeeIterator* (*iterator) (GeeAbstractCollection* self);
	gboolean (*foreach) (GeeAbstractCollection* self, GeeForallFunc f, void* f_target);
	void (*reserved0) (GeeAbstractCollection* self);
	void (*reserved1) (GeeAbstractCollection* self);
	void (*reserved2) (GeeAbstractCollection* self);
	void (*reserved3) (GeeAbstractCollection* self);
	void (*reserved4) (GeeAbstractCollection* self);
	void (*reserved5) (GeeAbstractCollection* self);
	void (*reserved6) (GeeAbstractCollection* self);
	void (*reserved7) (GeeAbstractCollection* self);
	void (*reserved8) (GeeAbstractCollection* self);
	void (*reserved9) (GeeAbstractCollection* self);
	gint (*get_size) (GeeAbstractCollection* self);
	gboolean (*get_read_only) (GeeAbstractCollection* self);
	GeeCollection* (*get_read_only_view) (GeeAbstractCollection* self);
};

struct _GeeSetIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeSet* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeSet* self);
	GDestroyNotify (*get_g_destroy_func) (GeeSet* self);
	GeeSet* (*get_read_only_view) (GeeSet* self);
};

struct _GeeAbstractSet {
	GeeAbstractCollection parent_instance;
	GeeAbstractSetPrivate * priv;
};

struct _GeeAbstractSetClass {
	GeeAbstractCollectionClass parent_class;
	void (*reserved0) (GeeAbstractSet* self);
	void (*reserved1) (GeeAbstractSet* self);
	void (*reserved2) (GeeAbstractSet* self);
	void (*reserved3) (GeeAbstractSet* self);
	void (*reserved4) (GeeAbstractSet* self);
	void (*reserved5) (GeeAbstractSet* self);
	void (*reserved6) (GeeAbstractSet* self);
	void (*reserved7) (GeeAbstractSet* self);
	void (*reserved8) (GeeAbstractSet* self);
	void (*reserved9) (GeeAbstractSet* self);
	GeeSet* (*get_read_only_view) (GeeAbstractSet* self);
};

struct _GeeAbstractSetPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GWeakRef _read_only_view;
};


static gpointer gee_abstract_set_parent_class = NULL;
static GeeSetIface* gee_abstract_set_gee_set_parent_iface = NULL;

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
GType gee_iterable_get_type (void) G_GNUC_CONST;
GType gee_collection_get_type (void) G_GNUC_CONST;
GType gee_abstract_collection_get_type (void) G_GNUC_CONST;
GType gee_set_get_type (void) G_GNUC_CONST;
GType gee_abstract_set_get_type (void) G_GNUC_CONST;
#define GEE_ABSTRACT_SET_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEE_TYPE_ABSTRACT_SET, GeeAbstractSetPrivate))
enum  {
	GEE_ABSTRACT_SET_DUMMY_PROPERTY,
	GEE_ABSTRACT_SET_G_TYPE,
	GEE_ABSTRACT_SET_G_DUP_FUNC,
	GEE_ABSTRACT_SET_G_DESTROY_FUNC,
	GEE_ABSTRACT_SET_READ_ONLY_VIEW
};
G_GNUC_INTERNAL void gee_abstract_set_reserved0 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved0 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved1 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved1 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved2 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved2 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved3 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved3 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved4 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved4 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved5 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved5 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved6 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved6 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved7 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved7 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved8 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved8 (GeeAbstractSet* self);
G_GNUC_INTERNAL void gee_abstract_set_reserved9 (GeeAbstractSet* self);
static void gee_abstract_set_real_reserved9 (GeeAbstractSet* self);
GeeAbstractSet* gee_abstract_set_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func);
GeeAbstractCollection* gee_abstract_collection_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func);
GeeSet* gee_abstract_set_get_read_only_view (GeeAbstractSet* self);
G_GNUC_INTERNAL GeeReadOnlySet* gee_read_only_set_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeSet* set);
G_GNUC_INTERNAL GeeReadOnlySet* gee_read_only_set_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeSet* set);
G_GNUC_INTERNAL GType gee_read_only_collection_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
G_GNUC_INTERNAL GType gee_read_only_set_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static GObject * gee_abstract_set_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void gee_abstract_set_finalize (GObject* obj);
static void _vala_gee_abstract_set_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gee_abstract_set_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static void gee_abstract_set_real_reserved0 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved0 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved0 (self);
}


static void gee_abstract_set_real_reserved1 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved1 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved1 (self);
}


static void gee_abstract_set_real_reserved2 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved2 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved2 (self);
}


static void gee_abstract_set_real_reserved3 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved3 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved3 (self);
}


static void gee_abstract_set_real_reserved4 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved4 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved4 (self);
}


static void gee_abstract_set_real_reserved5 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved5 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved5 (self);
}


static void gee_abstract_set_real_reserved6 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved6 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved6 (self);
}


static void gee_abstract_set_real_reserved7 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved7 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved7 (self);
}


static void gee_abstract_set_real_reserved8 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved8 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved8 (self);
}


static void gee_abstract_set_real_reserved9 (GeeAbstractSet* self) {
}


void gee_abstract_set_reserved9 (GeeAbstractSet* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_SET_GET_CLASS (self)->reserved9 (self);
}


GeeAbstractSet* gee_abstract_set_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func) {
	GeeAbstractSet * self = NULL;
	self = (GeeAbstractSet*) gee_abstract_collection_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}


GeeSet* gee_abstract_set_get_read_only_view (GeeAbstractSet* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ABSTRACT_SET_GET_CLASS (self)->get_read_only_view (self);
}


static GeeSet* gee_abstract_set_real_get_read_only_view (GeeAbstractSet* base) {
	GeeSet* result;
	GeeAbstractSet* self;
	GeeSet* instance = NULL;
	GObject* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	self = base;
	_tmp0_ = g_weak_ref_get (&self->priv->_read_only_view);
	instance = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_SET, GeeSet);
	_tmp1_ = instance;
	if (_tmp1_ == NULL) {
		GeeReadOnlySet* _tmp2_ = NULL;
		GeeSet* _tmp3_ = NULL;
		_tmp2_ = gee_read_only_set_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, self->priv->g_destroy_func, (GeeSet*) self);
		_g_object_unref0 (instance);
		instance = (GeeSet*) _tmp2_;
		_tmp3_ = instance;
		g_weak_ref_set (&self->priv->_read_only_view, (GObject*) _tmp3_);
	}
	result = instance;
	return result;
}


static GObject * gee_abstract_set_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	GeeAbstractSet * self;
	parent_class = G_OBJECT_CLASS (gee_abstract_set_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_SET, GeeAbstractSet);
	g_weak_ref_clear (&self->priv->_read_only_view);
	g_weak_ref_init (&self->priv->_read_only_view, NULL);
	return obj;
}


static void gee_abstract_set_class_init (GeeAbstractSetClass * klass) {
	gee_abstract_set_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeeAbstractSetPrivate));
	((GeeAbstractSetClass *) klass)->reserved0 = gee_abstract_set_real_reserved0;
	((GeeAbstractSetClass *) klass)->reserved1 = gee_abstract_set_real_reserved1;
	((GeeAbstractSetClass *) klass)->reserved2 = gee_abstract_set_real_reserved2;
	((GeeAbstractSetClass *) klass)->reserved3 = gee_abstract_set_real_reserved3;
	((GeeAbstractSetClass *) klass)->reserved4 = gee_abstract_set_real_reserved4;
	((GeeAbstractSetClass *) klass)->reserved5 = gee_abstract_set_real_reserved5;
	((GeeAbstractSetClass *) klass)->reserved6 = gee_abstract_set_real_reserved6;
	((GeeAbstractSetClass *) klass)->reserved7 = gee_abstract_set_real_reserved7;
	((GeeAbstractSetClass *) klass)->reserved8 = gee_abstract_set_real_reserved8;
	((GeeAbstractSetClass *) klass)->reserved9 = gee_abstract_set_real_reserved9;
	GEE_ABSTRACT_SET_CLASS (klass)->get_read_only_view = gee_abstract_set_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_set_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_set_set_property;
	G_OBJECT_CLASS (klass)->constructor = gee_abstract_set_constructor;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_set_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_SET_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_SET_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_SET_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_SET_READ_ONLY_VIEW, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static GType gee_abstract_set_gee_set_get_g_type (GeeAbstractSet* self) {
	return self->priv->g_type;
}


static GBoxedCopyFunc gee_abstract_set_gee_set_get_g_dup_func (GeeAbstractSet* self) {
	return self->priv->g_dup_func;
}


static GDestroyNotify gee_abstract_set_gee_set_get_g_destroy_func (GeeAbstractSet* self) {
	return self->priv->g_destroy_func;
}


static void gee_abstract_set_gee_set_interface_init (GeeSetIface * iface) {
	gee_abstract_set_gee_set_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_g_type = (GType(*)(GeeSet*)) gee_abstract_set_gee_set_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeSet*)) gee_abstract_set_gee_set_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeSet*)) gee_abstract_set_gee_set_get_g_destroy_func;
	iface->get_read_only_view = (GeeSet* (*) (GeeSet *)) gee_abstract_set_get_read_only_view;
}


static void gee_abstract_set_instance_init (GeeAbstractSet * self) {
	self->priv = GEE_ABSTRACT_SET_GET_PRIVATE (self);
}


static void gee_abstract_set_finalize (GObject* obj) {
	GeeAbstractSet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_SET, GeeAbstractSet);
	g_weak_ref_clear (&self->priv->_read_only_view);
	G_OBJECT_CLASS (gee_abstract_set_parent_class)->finalize (obj);
}


/**
 * Skeletal implementation of the {@link Set} interface.
 *
 * Contains common code shared by all set implementations.
 *
 * @see HashSet
 * @see TreeSet
 */
GType gee_abstract_set_get_type (void) {
	static volatile gsize gee_abstract_set_type_id__volatile = 0;
	if (g_once_init_enter (&gee_abstract_set_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractSetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_set_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractSet), 0, (GInstanceInitFunc) gee_abstract_set_instance_init, NULL };
		static const GInterfaceInfo gee_set_info = { (GInterfaceInitFunc) gee_abstract_set_gee_set_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType gee_abstract_set_type_id;
		gee_abstract_set_type_id = g_type_register_static (GEE_TYPE_ABSTRACT_COLLECTION, "GeeAbstractSet", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (gee_abstract_set_type_id, GEE_TYPE_SET, &gee_set_info);
		g_once_init_leave (&gee_abstract_set_type_id__volatile, gee_abstract_set_type_id);
	}
	return gee_abstract_set_type_id__volatile;
}


static void _vala_gee_abstract_set_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GeeAbstractSet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_SET, GeeAbstractSet);
	switch (property_id) {
		case GEE_ABSTRACT_SET_READ_ONLY_VIEW:
		g_value_take_object (value, gee_abstract_set_get_read_only_view (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_gee_abstract_set_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GeeAbstractSet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_SET, GeeAbstractSet);
	switch (property_id) {
		case GEE_ABSTRACT_SET_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_SET_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_SET_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



