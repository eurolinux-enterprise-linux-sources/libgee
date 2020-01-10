/* bidirsortedmap.c generated by valac 0.20.1.1-1480, the Vala compiler
 * generated from bidirsortedmap.vala, do not modify */

/* bidirsortedmap.vala
 *
 * Copyright (C) 2012  Maciej Piechotka
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

#define GEE_TYPE_MAP (gee_map_get_type ())
#define GEE_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MAP, GeeMap))
#define GEE_IS_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MAP))
#define GEE_MAP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MAP, GeeMapIface))

typedef struct _GeeMap GeeMap;
typedef struct _GeeMapIface GeeMapIface;

#define GEE_TYPE_MAP_ITERATOR (gee_map_iterator_get_type ())
#define GEE_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_MAP_ITERATOR, GeeMapIterator))
#define GEE_IS_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_MAP_ITERATOR))
#define GEE_MAP_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_MAP_ITERATOR, GeeMapIteratorIface))

typedef struct _GeeMapIterator GeeMapIterator;
typedef struct _GeeMapIteratorIface GeeMapIteratorIface;

#define GEE_TYPE_COLLECTION (gee_collection_get_type ())
#define GEE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_COLLECTION, GeeCollection))
#define GEE_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_COLLECTION))
#define GEE_COLLECTION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_COLLECTION, GeeCollectionIface))

typedef struct _GeeCollection GeeCollection;
typedef struct _GeeCollectionIface GeeCollectionIface;

#define GEE_TYPE_SET (gee_set_get_type ())
#define GEE_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_SET, GeeSet))
#define GEE_IS_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_SET))
#define GEE_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_SET, GeeSetIface))

typedef struct _GeeSet GeeSet;
typedef struct _GeeSetIface GeeSetIface;

#define GEE_MAP_TYPE_ENTRY (gee_map_entry_get_type ())
#define GEE_MAP_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_MAP_TYPE_ENTRY, GeeMapEntry))
#define GEE_MAP_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_MAP_TYPE_ENTRY, GeeMapEntryClass))
#define GEE_MAP_IS_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_MAP_TYPE_ENTRY))
#define GEE_MAP_IS_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_MAP_TYPE_ENTRY))
#define GEE_MAP_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_MAP_TYPE_ENTRY, GeeMapEntryClass))

typedef struct _GeeMapEntry GeeMapEntry;
typedef struct _GeeMapEntryClass GeeMapEntryClass;

#define GEE_TYPE_SORTED_MAP (gee_sorted_map_get_type ())
#define GEE_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_SORTED_MAP, GeeSortedMap))
#define GEE_IS_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_SORTED_MAP))
#define GEE_SORTED_MAP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_SORTED_MAP, GeeSortedMapIface))

typedef struct _GeeSortedMap GeeSortedMap;
typedef struct _GeeSortedMapIface GeeSortedMapIface;

#define GEE_TYPE_SORTED_SET (gee_sorted_set_get_type ())
#define GEE_SORTED_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_SORTED_SET, GeeSortedSet))
#define GEE_IS_SORTED_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_SORTED_SET))
#define GEE_SORTED_SET_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_SORTED_SET, GeeSortedSetIface))

typedef struct _GeeSortedSet GeeSortedSet;
typedef struct _GeeSortedSetIface GeeSortedSetIface;

#define GEE_TYPE_BIDIR_SORTED_MAP (gee_bidir_sorted_map_get_type ())
#define GEE_BIDIR_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_BIDIR_SORTED_MAP, GeeBidirSortedMap))
#define GEE_IS_BIDIR_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_BIDIR_SORTED_MAP))
#define GEE_BIDIR_SORTED_MAP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_BIDIR_SORTED_MAP, GeeBidirSortedMapIface))

typedef struct _GeeBidirSortedMap GeeBidirSortedMap;
typedef struct _GeeBidirSortedMapIface GeeBidirSortedMapIface;

#define GEE_TYPE_BIDIR_MAP_ITERATOR (gee_bidir_map_iterator_get_type ())
#define GEE_BIDIR_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_BIDIR_MAP_ITERATOR, GeeBidirMapIterator))
#define GEE_IS_BIDIR_MAP_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_BIDIR_MAP_ITERATOR))
#define GEE_BIDIR_MAP_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_BIDIR_MAP_ITERATOR, GeeBidirMapIteratorIface))

typedef struct _GeeBidirMapIterator GeeBidirMapIterator;
typedef struct _GeeBidirMapIteratorIface GeeBidirMapIteratorIface;

#define GEE_TYPE_ABSTRACT_MAP (gee_abstract_map_get_type ())
#define GEE_ABSTRACT_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_MAP, GeeAbstractMap))
#define GEE_ABSTRACT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_MAP, GeeAbstractMapClass))
#define GEE_IS_ABSTRACT_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_MAP))
#define GEE_IS_ABSTRACT_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_MAP))
#define GEE_ABSTRACT_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_MAP, GeeAbstractMapClass))

typedef struct _GeeAbstractMap GeeAbstractMap;
typedef struct _GeeAbstractMapClass GeeAbstractMapClass;

#define GEE_TYPE_ABSTRACT_SORTED_MAP (gee_abstract_sorted_map_get_type ())
#define GEE_ABSTRACT_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_SORTED_MAP, GeeAbstractSortedMap))
#define GEE_ABSTRACT_SORTED_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_SORTED_MAP, GeeAbstractSortedMapClass))
#define GEE_IS_ABSTRACT_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_SORTED_MAP))
#define GEE_IS_ABSTRACT_SORTED_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_SORTED_MAP))
#define GEE_ABSTRACT_SORTED_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_SORTED_MAP, GeeAbstractSortedMapClass))

typedef struct _GeeAbstractSortedMap GeeAbstractSortedMap;
typedef struct _GeeAbstractSortedMapClass GeeAbstractSortedMapClass;

#define GEE_TYPE_ABSTRACT_BIDIR_SORTED_MAP (gee_abstract_bidir_sorted_map_get_type ())
#define GEE_ABSTRACT_BIDIR_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ABSTRACT_BIDIR_SORTED_MAP, GeeAbstractBidirSortedMap))
#define GEE_ABSTRACT_BIDIR_SORTED_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_ABSTRACT_BIDIR_SORTED_MAP, GeeAbstractBidirSortedMapClass))
#define GEE_IS_ABSTRACT_BIDIR_SORTED_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ABSTRACT_BIDIR_SORTED_MAP))
#define GEE_IS_ABSTRACT_BIDIR_SORTED_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_ABSTRACT_BIDIR_SORTED_MAP))
#define GEE_ABSTRACT_BIDIR_SORTED_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_ABSTRACT_BIDIR_SORTED_MAP, GeeAbstractBidirSortedMapClass))

typedef struct _GeeAbstractBidirSortedMap GeeAbstractBidirSortedMap;
typedef struct _GeeAbstractBidirSortedMapClass GeeAbstractBidirSortedMapClass;

#define GEE_TYPE_TREE_MAP (gee_tree_map_get_type ())
#define GEE_TREE_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TREE_MAP, GeeTreeMap))
#define GEE_TREE_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TREE_MAP, GeeTreeMapClass))
#define GEE_IS_TREE_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TREE_MAP))
#define GEE_IS_TREE_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TREE_MAP))
#define GEE_TREE_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TREE_MAP, GeeTreeMapClass))

typedef struct _GeeTreeMap GeeTreeMap;
typedef struct _GeeTreeMapClass GeeTreeMapClass;
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

typedef gpointer (*GeeFoldMapFunc) (gconstpointer k, gconstpointer v, gpointer a, void* user_data);
typedef gboolean (*GeeForallMapFunc) (gconstpointer k, gconstpointer v, void* user_data);
struct _GeeMapIteratorIface {
	GTypeInterface parent_iface;
	GType (*get_k_type) (GeeMapIterator* self);
	GBoxedCopyFunc (*get_k_dup_func) (GeeMapIterator* self);
	GDestroyNotify (*get_k_destroy_func) (GeeMapIterator* self);
	GType (*get_v_type) (GeeMapIterator* self);
	GBoxedCopyFunc (*get_v_dup_func) (GeeMapIterator* self);
	GDestroyNotify (*get_v_destroy_func) (GeeMapIterator* self);
	gboolean (*next) (GeeMapIterator* self);
	gboolean (*has_next) (GeeMapIterator* self);
	gpointer (*get_key) (GeeMapIterator* self);
	gpointer (*get_value) (GeeMapIterator* self);
	void (*set_value) (GeeMapIterator* self, gconstpointer value);
	void (*unset) (GeeMapIterator* self);
	gpointer (*fold) (GeeMapIterator* self, GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeFoldMapFunc f, void* f_target, gpointer seed);
	gboolean (*foreach) (GeeMapIterator* self, GeeForallMapFunc f, void* f_target);
	gboolean (*get_valid) (GeeMapIterator* self);
	gboolean (*get_mutable) (GeeMapIterator* self);
	gboolean (*get_read_only) (GeeMapIterator* self);
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

struct _GeeSetIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeSet* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeSet* self);
	GDestroyNotify (*get_g_destroy_func) (GeeSet* self);
	GeeSet* (*get_read_only_view) (GeeSet* self);
};

struct _GeeMapIface {
	GTypeInterface parent_iface;
	GType (*get_k_type) (GeeMap* self);
	GBoxedCopyFunc (*get_k_dup_func) (GeeMap* self);
	GDestroyNotify (*get_k_destroy_func) (GeeMap* self);
	GType (*get_v_type) (GeeMap* self);
	GBoxedCopyFunc (*get_v_dup_func) (GeeMap* self);
	GDestroyNotify (*get_v_destroy_func) (GeeMap* self);
	gboolean (*has_key) (GeeMap* self, gconstpointer key);
	gboolean (*has) (GeeMap* self, gconstpointer key, gconstpointer value);
	gpointer (*get) (GeeMap* self, gconstpointer key);
	void (*set) (GeeMap* self, gconstpointer key, gconstpointer value);
	gboolean (*unset) (GeeMap* self, gconstpointer key, gpointer* value);
	void (*clear) (GeeMap* self);
	GeeMapIterator* (*map_iterator) (GeeMap* self);
	void (*set_all) (GeeMap* self, GeeMap* map);
	gboolean (*unset_all) (GeeMap* self, GeeMap* map);
	gboolean (*has_all) (GeeMap* self, GeeMap* map);
	gint (*get_size) (GeeMap* self);
	gboolean (*get_is_empty) (GeeMap* self);
	gboolean (*get_read_only) (GeeMap* self);
	GeeSet* (*get_keys) (GeeMap* self);
	GeeCollection* (*get_values) (GeeMap* self);
	GeeSet* (*get_entries) (GeeMap* self);
	GeeMap* (*get_read_only_view) (GeeMap* self);
};

struct _GeeSortedSetIface {
	GTypeInterface parent_iface;
	GType (*get_g_type) (GeeSortedSet* self);
	GBoxedCopyFunc (*get_g_dup_func) (GeeSortedSet* self);
	GDestroyNotify (*get_g_destroy_func) (GeeSortedSet* self);
	gpointer (*first) (GeeSortedSet* self);
	gpointer (*last) (GeeSortedSet* self);
	GeeIterator* (*iterator_at) (GeeSortedSet* self, gconstpointer element);
	gpointer (*lower) (GeeSortedSet* self, gconstpointer element);
	gpointer (*higher) (GeeSortedSet* self, gconstpointer element);
	gpointer (*floor) (GeeSortedSet* self, gconstpointer element);
	gpointer (*ceil) (GeeSortedSet* self, gconstpointer element);
	GeeSortedSet* (*head_set) (GeeSortedSet* self, gconstpointer before);
	GeeSortedSet* (*tail_set) (GeeSortedSet* self, gconstpointer after);
	GeeSortedSet* (*sub_set) (GeeSortedSet* self, gconstpointer from, gconstpointer to);
	GeeSortedSet* (*get_read_only_view) (GeeSortedSet* self);
};

struct _GeeSortedMapIface {
	GTypeInterface parent_iface;
	GeeSortedMap* (*head_map) (GeeSortedMap* self, gconstpointer before);
	GeeSortedMap* (*tail_map) (GeeSortedMap* self, gconstpointer after);
	GeeSortedMap* (*sub_map) (GeeSortedMap* self, gconstpointer before, gconstpointer after);
	GeeSortedSet* (*get_ascending_keys) (GeeSortedMap* self);
	GeeSortedSet* (*get_ascending_entries) (GeeSortedMap* self);
	GeeSortedMap* (*get_read_only_view) (GeeSortedMap* self);
};

struct _GeeBidirMapIteratorIface {
	GTypeInterface parent_iface;
	GType (*get_k_type) (GeeBidirMapIterator* self);
	GBoxedCopyFunc (*get_k_dup_func) (GeeBidirMapIterator* self);
	GDestroyNotify (*get_k_destroy_func) (GeeBidirMapIterator* self);
	GType (*get_v_type) (GeeBidirMapIterator* self);
	GBoxedCopyFunc (*get_v_dup_func) (GeeBidirMapIterator* self);
	GDestroyNotify (*get_v_destroy_func) (GeeBidirMapIterator* self);
	gboolean (*previous) (GeeBidirMapIterator* self);
	gboolean (*has_previous) (GeeBidirMapIterator* self);
	gboolean (*first) (GeeBidirMapIterator* self);
	gboolean (*last) (GeeBidirMapIterator* self);
};

struct _GeeBidirSortedMapIface {
	GTypeInterface parent_iface;
	GType (*get_k_type) (GeeBidirSortedMap* self);
	GBoxedCopyFunc (*get_k_dup_func) (GeeBidirSortedMap* self);
	GDestroyNotify (*get_k_destroy_func) (GeeBidirSortedMap* self);
	GType (*get_v_type) (GeeBidirSortedMap* self);
	GBoxedCopyFunc (*get_v_dup_func) (GeeBidirSortedMap* self);
	GDestroyNotify (*get_v_destroy_func) (GeeBidirSortedMap* self);
	GeeBidirMapIterator* (*bidir_map_iterator) (GeeBidirSortedMap* self);
	GeeBidirSortedMap* (*get_read_only_view) (GeeBidirSortedMap* self);
};

typedef gboolean (*GeeEqualDataFunc) (gconstpointer a, gconstpointer b, void* user_data);


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
GType gee_map_iterator_get_type (void) G_GNUC_CONST;
GType gee_collection_get_type (void) G_GNUC_CONST;
GType gee_set_get_type (void) G_GNUC_CONST;
GType gee_map_entry_get_type (void) G_GNUC_CONST;
GType gee_map_get_type (void) G_GNUC_CONST;
GType gee_sorted_set_get_type (void) G_GNUC_CONST;
GType gee_sorted_map_get_type (void) G_GNUC_CONST;
GType gee_bidir_map_iterator_get_type (void) G_GNUC_CONST;
GType gee_bidir_sorted_map_get_type (void) G_GNUC_CONST;
GeeBidirMapIterator* gee_bidir_sorted_map_bidir_map_iterator (GeeBidirSortedMap* self);
GeeBidirSortedMap* gee_bidir_sorted_map_empty (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func);
GeeTreeMap* gee_tree_map_new (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GCompareDataFunc key_compare_func, void* key_compare_func_target, GDestroyNotify key_compare_func_target_destroy_notify, GeeEqualDataFunc value_equal_func, void* value_equal_func_target, GDestroyNotify value_equal_func_target_destroy_notify);
GeeTreeMap* gee_tree_map_construct (GType object_type, GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func, GCompareDataFunc key_compare_func, void* key_compare_func_target, GDestroyNotify key_compare_func_target_destroy_notify, GeeEqualDataFunc value_equal_func, void* value_equal_func_target, GDestroyNotify value_equal_func_target_destroy_notify);
GType gee_abstract_map_get_type (void) G_GNUC_CONST;
GType gee_abstract_sorted_map_get_type (void) G_GNUC_CONST;
GType gee_abstract_bidir_sorted_map_get_type (void) G_GNUC_CONST;
GType gee_tree_map_get_type (void) G_GNUC_CONST;
GeeBidirSortedMap* gee_abstract_bidir_sorted_map_get_read_only_view (GeeAbstractBidirSortedMap* self);
GeeBidirSortedMap* gee_bidir_sorted_map_get_read_only_view (GeeBidirSortedMap* self);


/**
 * Returns a bi-directional iterator for this map.
 *
 * @return a bi-directional map iterator
 */
GeeBidirMapIterator* gee_bidir_sorted_map_bidir_map_iterator (GeeBidirSortedMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_BIDIR_SORTED_MAP_GET_INTERFACE (self)->bidir_map_iterator (self);
}


/**
 * Returns an immutable empty sorted set.
 *
 * @return an immutable empty sorted set
 */
GeeBidirSortedMap* gee_bidir_sorted_map_empty (GType k_type, GBoxedCopyFunc k_dup_func, GDestroyNotify k_destroy_func, GType v_type, GBoxedCopyFunc v_dup_func, GDestroyNotify v_destroy_func) {
	GeeBidirSortedMap* result = NULL;
	GeeTreeMap* _tmp0_;
	GeeTreeMap* _tmp1_;
	GeeBidirSortedMap* _tmp2_;
	GeeBidirSortedMap* _tmp3_;
	GeeBidirSortedMap* _tmp4_;
	_tmp0_ = gee_tree_map_new (k_type, (GBoxedCopyFunc) k_dup_func, k_destroy_func, v_type, (GBoxedCopyFunc) v_dup_func, v_destroy_func, NULL, NULL, NULL, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_abstract_bidir_sorted_map_get_read_only_view ((GeeAbstractBidirSortedMap*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}


GeeBidirSortedMap* gee_bidir_sorted_map_get_read_only_view (GeeBidirSortedMap* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_BIDIR_SORTED_MAP_GET_INTERFACE (self)->get_read_only_view (self);
}


static void gee_bidir_sorted_map_base_init (GeeBidirSortedMapIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		 * The read-only view of this set.
		 */
		g_object_interface_install_property (iface, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_BIDIR_SORTED_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	}
}


GType gee_bidir_sorted_map_get_type (void) {
	static volatile gsize gee_bidir_sorted_map_type_id__volatile = 0;
	if (g_once_init_enter (&gee_bidir_sorted_map_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeBidirSortedMapIface), (GBaseInitFunc) gee_bidir_sorted_map_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType gee_bidir_sorted_map_type_id;
		gee_bidir_sorted_map_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeBidirSortedMap", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (gee_bidir_sorted_map_type_id, GEE_TYPE_SORTED_MAP);
		g_once_init_leave (&gee_bidir_sorted_map_type_id__volatile, gee_bidir_sorted_map_type_id);
	}
	return gee_bidir_sorted_map_type_id__volatile;
}



