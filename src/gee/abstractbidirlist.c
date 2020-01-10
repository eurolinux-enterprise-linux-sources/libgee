/* abstractbidirlist.c generated by valac 0.20.1.1-1480, the Vala compiler
 * generated from abstractbidirlist.vala, do not modify */

/* bidirlistiterator.vala
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

#define GEE_TYPE_LIST (gee_list_get_type ())
#define GEE_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_LIST, GeeList))
#define GEE_IS_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_LIST))
#define GEE_LIST_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_LIST, GeeListIface))

typedef struct _GeeList GeeList;
typedef struct _GeeListIface GeeListIface;

#define GEE_TYPE_LIST_ITERATOR (gee_list_iterator_get_type ())
#define GEE_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_LIST_ITERATOR, GeeListIterator))
#define GEE_IS_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_LIST_ITERATOR))
#define GEE_LIST_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_LIST_ITERATOR, GeeListIteratorIface))

typedef struct _GeeListIterator GeeListIterator;
typedef struct _GeeListIteratorIface GeeListIteratorIface;

#define GEE_TYPE_ABSTRACT_LIST (gee_abstract_list_get_type ())
#define GEE_ABSTRACT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_LIST, GeeAbstractList))
#define GEE_ABSTRACT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_LIST, GeeAbstractListClass))
#define GEE_IS_ABSTRACT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_LIST))
#define GEE_IS_ABSTRACT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_LIST))
#define GEE_ABSTRACT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_LIST, GeeAbstractListClass))

typedef struct _GeeAbstractList GeeAbstractList;
typedef struct _GeeAbstractListClass GeeAbstractListClass;
typedef struct _GeeAbstractListPrivate GeeAbstractListPrivate;

#define GEE_TYPE_BIDIR_LIST (gee_bidir_list_get_type ())
#define GEE_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_BIDIR_LIST, GeeBidirList))
#define GEE_IS_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_BIDIR_LIST))
#define GEE_BIDIR_LIST_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_BIDIR_LIST, GeeBidirListIface))

typedef struct _GeeBidirList GeeBidirList;
typedef struct _GeeBidirListIface GeeBidirListIface;

#define GEE_TYPE_BIDIR_ITERATOR (gee_bidir_iterator_get_type ())
#define GEE_BIDIR_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_BIDIR_ITERATOR, GeeBidirIterator))
#define GEE_IS_BIDIR_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_BIDIR_ITERATOR))
#define GEE_BIDIR_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_BIDIR_ITERATOR, GeeBidirIteratorIface))

typedef struct _GeeBidirIterator GeeBidirIterator;
typedef struct _GeeBidirIteratorIface GeeBidirIteratorIface;

#define GEE_TYPE_BIDIR_LIST_ITERATOR (gee_bidir_list_iterator_get_type ())
#define GEE_BIDIR_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_BIDIR_LIST_ITERATOR, GeeBidirListIterator))
#define GEE_IS_BIDIR_LIST_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_BIDIR_LIST_ITERATOR))
#define GEE_BIDIR_LIST_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_BIDIR_LIST_ITERATOR, GeeBidirListIteratorIface))

typedef struct _GeeBidirListIterator GeeBidirListIterator;
typedef struct _GeeBidirListIteratorIface GeeBidirListIteratorIface;

#define GEE_TYPE_ABSTRACT_BIDIR_LIST (gee_abstract_bidir_list_get_type ())
#define GEE_ABSTRACT_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList))
#define GEE_ABSTRACT_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirListClass))
#define GEE_IS_ABSTRACT_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_BIDIR_LIST))
#define GEE_IS_ABSTRACT_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_BIDIR_LIST))
#define GEE_ABSTRACT_BIDIR_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirListClass))

typedef struct _GeeAbstractBidirList GeeAbstractBidirList;
typedef struct _GeeAbstractBidirListClass GeeAbstractBidirListClass;
typedef struct _GeeAbstractBidirListPrivate GeeAbstractBidirListPrivate;

#define GEE_TYPE_READ_ONLY_COLLECTION (gee_read_only_collection_get_type ())
#define GEE_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollection))
#define GEE_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))
#define GEE_IS_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_IS_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_READ_ONLY_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))

typedef struct _GeeReadOnlyCollection GeeReadOnlyCollection;
typedef struct _GeeReadOnlyCollectionClass GeeReadOnlyCollectionClass;

#define GEE_TYPE_READ_ONLY_LIST (gee_read_only_list_get_type ())
#define GEE_READ_ONLY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyList))
#define GEE_READ_ONLY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyListClass))
#define GEE_IS_READ_ONLY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_LIST))
#define GEE_IS_READ_ONLY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_LIST))
#define GEE_READ_ONLY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_LIST, GeeReadOnlyListClass))

typedef struct _GeeReadOnlyList GeeReadOnlyList;
typedef struct _GeeReadOnlyListClass GeeReadOnlyListClass;

#define GEE_TYPE_READ_ONLY_BIDIR_LIST (gee_read_only_bidir_list_get_type ())
#define GEE_READ_ONLY_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirList))
#define GEE_READ_ONLY_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirListClass))
#define GEE_IS_READ_ONLY_BIDIR_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST))
#define GEE_IS_READ_ONLY_BIDIR_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_BIDIR_LIST))
#define GEE_READ_ONLY_BIDIR_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_BIDIR_LIST, GeeReadOnlyBidirListClass))

typedef struct _GeeReadOnlyBidirList GeeReadOnlyBidirList;
typedef struct _GeeReadOnlyBidirListClass GeeReadOnlyBidirListClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef gboolean (*GeeForallFunc) (gpointer g, void* user_data);
typedef enum  {
	GEE_TRAVERSABLE_STREAM_YIELD,
	GEE_TRAVERSABLE_STREAM_CONTINUE,
	GEE_TRAVERSABLE_STREAM_END
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

struct _GeeListIteratorIface {
	GTypeInterface parent_iface;
	void (*set) (GeeListIterator* self, gconstpointer item);
	void (*add) (GeeListIterator* self, gconstpointer item);
	gint (*index) (GeeListIterator* self);
};

struct _GeeListIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeList* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeList* self);
	GDestroyNotify (*get_g_destroy_func) (GeeList* self);
	GeeListIterator* (*list_iterator) (GeeList* self);
	gpointer (*get) (GeeList* self, gint index);
	void (*set) (GeeList* self, gint index, gconstpointer item);
	gint (*index_of) (GeeList* self, gconstpointer item);
	void (*insert) (GeeList* self, gint index, gconstpointer item);
	gpointer (*remove_at) (GeeList* self, gint index);
	GeeList* (*slice) (GeeList* self, gint start, gint stop);
	gpointer (*first) (GeeList* self);
	gpointer (*last) (GeeList* self);
	void (*insert_all) (GeeList* self, gint index, GeeCollection* collection);
	void (*sort) (GeeList* self, GCompareDataFunc compare_func, void* compare_func_target, GDestroyNotify compare_func_target_destroy_notify);
	GeeList* (*get_read_only_view) (GeeList* self);
};

struct _GeeAbstractList {
	GeeAbstractCollection parent_instance;
	GeeAbstractListPrivate * priv;
};

struct _GeeAbstractListClass {
	GeeAbstractCollectionClass parent_class;
	GeeListIterator* (*list_iterator) (GeeAbstractList* self);
	gpointer (*get) (GeeAbstractList* self, gint index);
	void (*set) (GeeAbstractList* self, gint index, gconstpointer item);
	gint (*index_of) (GeeAbstractList* self, gconstpointer item);
	void (*insert) (GeeAbstractList* self, gint index, gconstpointer item);
	gpointer (*remove_at) (GeeAbstractList* self, gint index);
	GeeList* (*slice) (GeeAbstractList* self, gint start, gint stop);
	void (*reserved0) (GeeAbstractList* self);
	void (*reserved1) (GeeAbstractList* self);
	void (*reserved2) (GeeAbstractList* self);
	void (*reserved3) (GeeAbstractList* self);
	void (*reserved4) (GeeAbstractList* self);
	void (*reserved5) (GeeAbstractList* self);
	void (*reserved6) (GeeAbstractList* self);
	void (*reserved7) (GeeAbstractList* self);
	void (*reserved8) (GeeAbstractList* self);
	void (*reserved9) (GeeAbstractList* self);
	GeeList* (*get_read_only_view) (GeeAbstractList* self);
};

struct _GeeBidirIteratorIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeBidirIterator* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeBidirIterator* self);
	GDestroyNotify (*get_g_destroy_func) (GeeBidirIterator* self);
	gboolean (*previous) (GeeBidirIterator* self);
	gboolean (*has_previous) (GeeBidirIterator* self);
	gboolean (*first) (GeeBidirIterator* self);
	gboolean (*last) (GeeBidirIterator* self);
};

struct _GeeBidirListIteratorIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeBidirListIterator* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeBidirListIterator* self);
	GDestroyNotify (*get_g_destroy_func) (GeeBidirListIterator* self);
	void (*insert) (GeeBidirListIterator* self, gconstpointer item);
};

struct _GeeBidirListIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeBidirList* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeBidirList* self);
	GDestroyNotify (*get_g_destroy_func) (GeeBidirList* self);
	GeeBidirListIterator* (*bidir_list_iterator) (GeeBidirList* self);
	GeeBidirList* (*get_read_only_view) (GeeBidirList* self);
};

struct _GeeAbstractBidirList {
	GeeAbstractList parent_instance;
	GeeAbstractBidirListPrivate * priv;
};

struct _GeeAbstractBidirListClass {
	GeeAbstractListClass parent_class;
	GeeBidirListIterator* (*bidir_list_iterator) (GeeAbstractBidirList* self);
	void (*reserved0) (GeeAbstractBidirList* self);
	void (*reserved1) (GeeAbstractBidirList* self);
	void (*reserved2) (GeeAbstractBidirList* self);
	void (*reserved3) (GeeAbstractBidirList* self);
	void (*reserved4) (GeeAbstractBidirList* self);
	void (*reserved5) (GeeAbstractBidirList* self);
	void (*reserved6) (GeeAbstractBidirList* self);
	void (*reserved7) (GeeAbstractBidirList* self);
	void (*reserved8) (GeeAbstractBidirList* self);
	void (*reserved9) (GeeAbstractBidirList* self);
	GeeBidirList* (*get_read_only_view) (GeeAbstractBidirList* self);
};

struct _GeeAbstractBidirListPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeBidirList* _read_only_view;
};


static gpointer gee_abstract_bidir_list_parent_class = NULL;
static GeeBidirListIface* gee_abstract_bidir_list_gee_bidir_list_parent_iface = NULL;

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
GType gee_list_iterator_get_type (void) G_GNUC_CONST;
GType gee_list_get_type (void) G_GNUC_CONST;
GType gee_abstract_list_get_type (void) G_GNUC_CONST;
GType gee_bidir_iterator_get_type (void) G_GNUC_CONST;
GType gee_bidir_list_iterator_get_type (void) G_GNUC_CONST;
GType gee_bidir_list_get_type (void) G_GNUC_CONST;
GType gee_abstract_bidir_list_get_type (void) G_GNUC_CONST;
#define GEE_ABSTRACT_BIDIR_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirListPrivate))
enum  {
	GEE_ABSTRACT_BIDIR_LIST_DUMMY_PROPERTY,
	GEE_ABSTRACT_BIDIR_LIST_G_TYPE,
	GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC,
	GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC,
	GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW
};
GeeBidirListIterator* gee_abstract_bidir_list_bidir_list_iterator (GeeAbstractBidirList* self);
static GeeBidirListIterator* gee_abstract_bidir_list_real_bidir_list_iterator (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved0 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved0 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved1 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved1 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved2 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved2 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved3 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved3 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved4 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved4 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved5 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved5 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved6 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved6 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved7 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved7 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved8 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved8 (GeeAbstractBidirList* self);
void gee_abstract_bidir_list_reserved9 (GeeAbstractBidirList* self);
static void gee_abstract_bidir_list_real_reserved9 (GeeAbstractBidirList* self);
GeeAbstractBidirList* gee_abstract_bidir_list_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func);
GeeAbstractList* gee_abstract_list_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func);
GeeBidirList* gee_abstract_bidir_list_get_read_only_view (GeeAbstractBidirList* self);
GeeReadOnlyBidirList* gee_read_only_bidir_list_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeBidirList* list);
GeeReadOnlyBidirList* gee_read_only_bidir_list_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeBidirList* list);
GType gee_read_only_collection_get_type (void) G_GNUC_CONST;
GType gee_read_only_list_get_type (void) G_GNUC_CONST;
GType gee_read_only_bidir_list_get_type (void) G_GNUC_CONST;
static void gee_abstract_bidir_list_finalize (GObject* obj);
static void _vala_gee_abstract_bidir_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gee_abstract_bidir_list_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
 * {@inheritDoc}
 */
static GeeBidirListIterator* gee_abstract_bidir_list_real_bidir_list_iterator (GeeAbstractBidirList* self) {
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_bidir_list_bidir_list_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GeeBidirListIterator* gee_abstract_bidir_list_bidir_list_iterator (GeeAbstractBidirList* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->bidir_list_iterator (self);
}


static void gee_abstract_bidir_list_real_reserved0 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved0 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved0 (self);
}


static void gee_abstract_bidir_list_real_reserved1 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved1 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved1 (self);
}


static void gee_abstract_bidir_list_real_reserved2 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved2 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved2 (self);
}


static void gee_abstract_bidir_list_real_reserved3 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved3 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved3 (self);
}


static void gee_abstract_bidir_list_real_reserved4 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved4 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved4 (self);
}


static void gee_abstract_bidir_list_real_reserved5 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved5 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved5 (self);
}


static void gee_abstract_bidir_list_real_reserved6 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved6 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved6 (self);
}


static void gee_abstract_bidir_list_real_reserved7 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved7 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved7 (self);
}


static void gee_abstract_bidir_list_real_reserved8 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved8 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved8 (self);
}


static void gee_abstract_bidir_list_real_reserved9 (GeeAbstractBidirList* self) {
}


void gee_abstract_bidir_list_reserved9 (GeeAbstractBidirList* self) {
	g_return_if_fail (self != NULL);
	GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->reserved9 (self);
}


GeeAbstractBidirList* gee_abstract_bidir_list_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func) {
	GeeAbstractBidirList * self = NULL;
	self = (GeeAbstractBidirList*) gee_abstract_list_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}


GeeBidirList* gee_abstract_bidir_list_get_read_only_view (GeeAbstractBidirList* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ABSTRACT_BIDIR_LIST_GET_CLASS (self)->get_read_only_view (self);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static GeeBidirList* gee_abstract_bidir_list_real_get_read_only_view (GeeAbstractBidirList* base) {
	GeeBidirList* result;
	GeeAbstractBidirList* self;
	GeeBidirList* _tmp0_;
	GeeBidirList* _tmp1_;
	GeeBidirList* instance;
	GeeBidirList* _tmp2_;
	self = base;
	_tmp0_ = self->priv->_read_only_view;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	instance = _tmp1_;
	_tmp2_ = self->priv->_read_only_view;
	if (_tmp2_ == NULL) {
		GeeReadOnlyBidirList* _tmp3_;
		GeeBidirList* _tmp4_;
		GeeBidirList* _tmp5_;
		_tmp3_ = gee_read_only_bidir_list_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, self->priv->g_destroy_func, (GeeBidirList*) self);
		_g_object_unref0 (instance);
		instance = (GeeBidirList*) _tmp3_;
		_tmp4_ = instance;
		self->priv->_read_only_view = _tmp4_;
		_tmp5_ = instance;
		g_object_add_weak_pointer ((GObject*) _tmp5_, (void**) (&self->priv->_read_only_view));
	}
	result = instance;
	return result;
}


static void gee_abstract_bidir_list_class_init (GeeAbstractBidirListClass * klass) {
	gee_abstract_bidir_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GeeAbstractBidirListPrivate));
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->bidir_list_iterator = gee_abstract_bidir_list_real_bidir_list_iterator;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved0 = gee_abstract_bidir_list_real_reserved0;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved1 = gee_abstract_bidir_list_real_reserved1;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved2 = gee_abstract_bidir_list_real_reserved2;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved3 = gee_abstract_bidir_list_real_reserved3;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved4 = gee_abstract_bidir_list_real_reserved4;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved5 = gee_abstract_bidir_list_real_reserved5;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved6 = gee_abstract_bidir_list_real_reserved6;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved7 = gee_abstract_bidir_list_real_reserved7;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved8 = gee_abstract_bidir_list_real_reserved8;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->reserved9 = gee_abstract_bidir_list_real_reserved9;
	GEE_ABSTRACT_BIDIR_LIST_CLASS (klass)->get_read_only_view = gee_abstract_bidir_list_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_bidir_list_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_bidir_list_set_property;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_bidir_list_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_BIDIR_LIST, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static GType gee_abstract_bidir_list_gee_bidir_list_get_g_type (GeeAbstractBidirList* self) {
	return self->priv->g_type;
}


static GBoxedCopyFunc gee_abstract_bidir_list_gee_bidir_list_get_g_dup_func (GeeAbstractBidirList* self) {
	return self->priv->g_dup_func;
}


static GDestroyNotify gee_abstract_bidir_list_gee_bidir_list_get_g_destroy_func (GeeAbstractBidirList* self) {
	return self->priv->g_destroy_func;
}


static void gee_abstract_bidir_list_gee_bidir_list_interface_init (GeeBidirListIface * iface) {
	gee_abstract_bidir_list_gee_bidir_list_parent_iface = g_type_interface_peek_parent (iface);
	iface->bidir_list_iterator = (GeeBidirListIterator* (*)(GeeBidirList*)) gee_abstract_bidir_list_bidir_list_iterator;
	iface->get_g_type = (GType(*)(GeeBidirList*)) gee_abstract_bidir_list_gee_bidir_list_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeBidirList*)) gee_abstract_bidir_list_gee_bidir_list_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeBidirList*)) gee_abstract_bidir_list_gee_bidir_list_get_g_destroy_func;
	iface->get_read_only_view = (GeeBidirList* (*) (GeeBidirList *)) gee_abstract_bidir_list_get_read_only_view;
}


static void gee_abstract_bidir_list_instance_init (GeeAbstractBidirList * self) {
	self->priv = GEE_ABSTRACT_BIDIR_LIST_GET_PRIVATE (self);
}


static void gee_abstract_bidir_list_finalize (GObject* obj) {
	GeeAbstractBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	G_OBJECT_CLASS (gee_abstract_bidir_list_parent_class)->finalize (obj);
}


GType gee_abstract_bidir_list_get_type (void) {
	static volatile gsize gee_abstract_bidir_list_type_id__volatile = 0;
	if (g_once_init_enter (&gee_abstract_bidir_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractBidirListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_bidir_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractBidirList), 0, (GInstanceInitFunc) gee_abstract_bidir_list_instance_init, NULL };
		static const GInterfaceInfo gee_bidir_list_info = { (GInterfaceInitFunc) gee_abstract_bidir_list_gee_bidir_list_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType gee_abstract_bidir_list_type_id;
		gee_abstract_bidir_list_type_id = g_type_register_static (GEE_TYPE_ABSTRACT_LIST, "GeeAbstractBidirList", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (gee_abstract_bidir_list_type_id, GEE_TYPE_BIDIR_LIST, &gee_bidir_list_info);
		g_once_init_leave (&gee_abstract_bidir_list_type_id__volatile, gee_abstract_bidir_list_type_id);
	}
	return gee_abstract_bidir_list_type_id__volatile;
}


static void _vala_gee_abstract_bidir_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GeeAbstractBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	switch (property_id) {
		case GEE_ABSTRACT_BIDIR_LIST_READ_ONLY_VIEW:
		g_value_take_object (value, gee_abstract_bidir_list_get_read_only_view (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_gee_abstract_bidir_list_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GeeAbstractBidirList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_BIDIR_LIST, GeeAbstractBidirList);
	switch (property_id) {
		case GEE_ABSTRACT_BIDIR_LIST_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_BIDIR_LIST_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



