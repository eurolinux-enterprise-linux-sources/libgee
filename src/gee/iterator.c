/* iterator.c generated by valac 0.34.0.46-213c, the Vala compiler
 * generated from iterator.vala, do not modify */

/* iterator.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
 * Copyright (C) 2009  Didier Villevalois, Maciej Piechotka
 * Copyright (C) 2010-2011  Maciej Piechotka
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
 * 	Jürg Billeter <j@bitron.ch>
 * 	Maciej Piechotka <uzytkownik2@gmail.com>
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
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
#define _gee_lazy_unref0(var) ((var == NULL) ? NULL : (var = (gee_lazy_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block11Data Block11Data;
#define _g_destroy_func0(var) (((var == NULL) || (g_destroy_func == NULL)) ? NULL : (var = (g_destroy_func (var), NULL)))

typedef gboolean (*GeeForallFunc) (gpointer g, void* user_data);
typedef enum  {
	GEE_TRAVERSABLE_STREAM_YIELD,
	GEE_TRAVERSABLE_STREAM_CONTINUE,
	GEE_TRAVERSABLE_STREAM_END,
	GEE_TRAVERSABLE_STREAM_WAIT
} GeeTraversableStream;

typedef GeeTraversableStream (*GeeStreamFunc) (GeeTraversableStream state, GeeLazy* g, GeeLazy** lazy, void* user_data);
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

struct _GeeIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (GeeIterator* self);
	gboolean (*has_next) (GeeIterator* self);
	gpointer (*get) (GeeIterator* self);
	void (*remove) (GeeIterator* self);
	gboolean (*get_valid) (GeeIterator* self);
	gboolean (*get_read_only) (GeeIterator* self);
};

typedef GeeLazy* (*GeeUnfoldFunc) (void* user_data);
struct _Block11Data {
	int _ref_count_;
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeIterator* current;
	GeeIterator* iters;
};



GType gee_traversable_stream_get_type (void) G_GNUC_CONST;
gpointer gee_lazy_ref (gpointer instance);
void gee_lazy_unref (gpointer instance);
GParamSpec* gee_param_spec_lazy (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void gee_value_set_lazy (GValue* value, gpointer v_object);
void gee_value_take_lazy (GValue* value, gpointer v_object);
gpointer gee_value_get_lazy (const GValue* value);
GType gee_lazy_get_type (void) G_GNUC_CONST;
GType gee_traversable_get_type (void) G_GNUC_CONST;
GType gee_iterator_get_type (void) G_GNUC_CONST;
gboolean gee_iterator_next (GeeIterator* self);
gboolean gee_iterator_has_next (GeeIterator* self);
gpointer gee_iterator_get (GeeIterator* self);
void gee_iterator_remove (GeeIterator* self);
GeeIterator* gee_iterator_unfold (GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeUnfoldFunc f, void* f_target, GDestroyNotify f_target_destroy_notify, GeeLazy* current);
G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_new (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeUnfoldFunc func, void* func_target, GDestroyNotify func_target_destroy_notify, GeeLazy* current);
G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_construct (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeUnfoldFunc func, void* func_target, GDestroyNotify func_target_destroy_notify, GeeLazy* current);
G_GNUC_INTERNAL GType gee_unfold_iterator_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
GeeIterator* gee_iterator_concat (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeIterator* iters);
static Block11Data* block11_data_ref (Block11Data* _data11_);
static void block11_data_unref (void * _userdata_);
gboolean gee_iterator_get_valid (GeeIterator* self);
static GeeLazy* __lambda7_ (Block11Data* _data11_);
GeeLazy* gee_lazy_new_from_value (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, gconstpointer item);
GeeLazy* gee_lazy_construct_from_value (GType object_type, GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, gconstpointer item);
static GeeLazy* ___lambda7__gee_unfold_func (gpointer self);
gboolean gee_iterator_get_read_only (GeeIterator* self);


/**
 * Advances to the next element in the iteration.
 *
 * @return ``true`` if the iterator has a next element
 */
gboolean gee_iterator_next (GeeIterator* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_ITERATOR_GET_INTERFACE (self)->next (self);
}


/**
 * Checks whether there is a next element in the iteration.
 *
 * @return ``true`` if the iterator has a next element
 */
gboolean gee_iterator_has_next (GeeIterator* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_ITERATOR_GET_INTERFACE (self)->has_next (self);
}


/**
 * Returns the current element in the iteration.
 *
 * @return the current element in the iteration
 */
gpointer gee_iterator_get (GeeIterator* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_ITERATOR_GET_INTERFACE (self)->get (self);
}


/**
 * Removes the current element in the iteration. The cursor is set in an
 * in-between state. Both {@link get} and {@link remove} will fail until
 * the next move of the cursor (calling {@link next}).
 */
void gee_iterator_remove (GeeIterator* self) {
	g_return_if_fail (self != NULL);
	GEE_ITERATOR_GET_INTERFACE (self)->remove (self);
}


/**
 * Create iterator from unfolding function. The lazy value is
 * force-evaluated before progressing to next element.
 *
 * @param f Unfolding function
 * @param current If iterator is to be valid it contains the current value of it
 */
GeeIterator* gee_iterator_unfold (GType a_type, GBoxedCopyFunc a_dup_func, GDestroyNotify a_destroy_func, GeeUnfoldFunc f, void* f_target, GDestroyNotify f_target_destroy_notify, GeeLazy* current) {
	GeeIterator* result = NULL;
	GeeUnfoldFunc _tmp0_ = NULL;
	void* _tmp0__target = NULL;
	GDestroyNotify _tmp0__target_destroy_notify = NULL;
	GeeLazy* _tmp1_ = NULL;
	GeeUnfoldIterator* _tmp2_ = NULL;
	_tmp0_ = f;
	_tmp0__target = f_target;
	_tmp0__target_destroy_notify = f_target_destroy_notify;
	f_target_destroy_notify = NULL;
	_tmp1_ = current;
	current = NULL;
	_tmp2_ = gee_unfold_iterator_new (a_type, (GBoxedCopyFunc) a_dup_func, a_destroy_func, _tmp0_, _tmp0__target, _tmp0__target_destroy_notify, _tmp1_);
	result = (GeeIterator*) _tmp2_;
	(f_target_destroy_notify == NULL) ? NULL : (f_target_destroy_notify (f_target), NULL);
	f = NULL;
	f_target = NULL;
	f_target_destroy_notify = NULL;
	_gee_lazy_unref0 (current);
	return result;
}


/**
 * Concatinate iterators.
 *
 * @param iters Iterators of iterators
 * @return Iterator containg values of each iterator
 */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static Block11Data* block11_data_ref (Block11Data* _data11_) {
	g_atomic_int_inc (&_data11_->_ref_count_);
	return _data11_;
}


static void block11_data_unref (void * _userdata_) {
	Block11Data* _data11_;
	_data11_ = (Block11Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data11_->_ref_count_)) {
		GType g_type;
		GBoxedCopyFunc g_dup_func;
		GDestroyNotify g_destroy_func;
		g_type = _data11_->g_type;
		g_dup_func = _data11_->g_dup_func;
		g_destroy_func = _data11_->g_destroy_func;
		_g_object_unref0 (_data11_->current);
		_g_object_unref0 (_data11_->iters);
		g_slice_free (Block11Data, _data11_);
	}
}


static GeeLazy* __lambda7_ (Block11Data* _data11_) {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeLazy* result = NULL;
	g_type = _data11_->g_type;
	g_dup_func = _data11_->g_dup_func;
	g_destroy_func = _data11_->g_destroy_func;
	while (TRUE) {
		GeeIterator* _tmp0_ = NULL;
		_tmp0_ = _data11_->current;
		if (_tmp0_ == NULL) {
			GeeIterator* _tmp1_ = NULL;
			gboolean _tmp2_ = FALSE;
			_tmp1_ = _data11_->iters;
			_tmp2_ = gee_iterator_next (_tmp1_);
			if (_tmp2_) {
				GeeIterator* _tmp3_ = NULL;
				gpointer _tmp4_ = NULL;
				_tmp3_ = _data11_->iters;
				_tmp4_ = gee_iterator_get (_tmp3_);
				_g_object_unref0 (_data11_->current);
				_data11_->current = (GeeIterator*) _tmp4_;
			} else {
				result = NULL;
				return result;
			}
		} else {
			GeeIterator* _tmp5_ = NULL;
			gboolean _tmp6_ = FALSE;
			_tmp5_ = _data11_->current;
			_tmp6_ = gee_iterator_next (_tmp5_);
			if (_tmp6_) {
				GeeIterator* _tmp7_ = NULL;
				gpointer _tmp8_ = NULL;
				gpointer _tmp9_ = NULL;
				GeeLazy* _tmp10_ = NULL;
				GeeLazy* _tmp11_ = NULL;
				_tmp7_ = _data11_->current;
				_tmp8_ = gee_iterator_get (_tmp7_);
				_tmp9_ = _tmp8_;
				_tmp10_ = gee_lazy_new_from_value (g_type, (GBoxedCopyFunc) g_dup_func, g_destroy_func, _tmp9_);
				_tmp11_ = _tmp10_;
				_g_destroy_func0 (_tmp9_);
				result = _tmp11_;
				return result;
			} else {
				_g_object_unref0 (_data11_->current);
				_data11_->current = NULL;
			}
		}
	}
}


static GeeLazy* ___lambda7__gee_unfold_func (gpointer self) {
	GeeLazy* result;
	result = __lambda7_ (self);
	return result;
}


GeeIterator* gee_iterator_concat (GType g_type, GBoxedCopyFunc g_dup_func, GDestroyNotify g_destroy_func, GeeIterator* iters) {
	GeeIterator* result = NULL;
	Block11Data* _data11_;
	GeeIterator* _tmp0_ = NULL;
	GeeIterator* _tmp1_ = NULL;
	GeeIterator* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp4_ = FALSE;
	GeeIterator* _tmp7_ = NULL;
	g_return_val_if_fail (iters != NULL, NULL);
	_data11_ = g_slice_new0 (Block11Data);
	_data11_->_ref_count_ = 1;
	_data11_->g_type = g_type;
	_data11_->g_dup_func = g_dup_func;
	_data11_->g_destroy_func = g_destroy_func;
	_tmp0_ = iters;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (_data11_->iters);
	_data11_->iters = _tmp1_;
	_data11_->current = NULL;
	_tmp2_ = _data11_->iters;
	_tmp3_ = gee_iterator_get_valid (_tmp2_);
	_tmp4_ = _tmp3_;
	if (_tmp4_) {
		GeeIterator* _tmp5_ = NULL;
		gpointer _tmp6_ = NULL;
		_tmp5_ = _data11_->iters;
		_tmp6_ = gee_iterator_get (_tmp5_);
		_g_object_unref0 (_data11_->current);
		_data11_->current = (GeeIterator*) _tmp6_;
	}
	_tmp7_ = gee_iterator_unfold (g_type, (GBoxedCopyFunc) g_dup_func, g_destroy_func, ___lambda7__gee_unfold_func, block11_data_ref (_data11_), block11_data_unref, NULL);
	result = _tmp7_;
	block11_data_unref (_data11_);
	_data11_ = NULL;
	return result;
}


gboolean gee_iterator_get_valid (GeeIterator* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_ITERATOR_GET_INTERFACE (self)->get_valid (self);
}


gboolean gee_iterator_get_read_only (GeeIterator* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_ITERATOR_GET_INTERFACE (self)->get_read_only (self);
}


static void gee_iterator_base_init (GeeIteratorIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		 * Determines wheather the call to {@link get} is legal. It is false at the
		 * beginning and after {@link remove} call and true otherwise.
		 */
		g_object_interface_install_property (iface, g_param_spec_boolean ("valid", "valid", "valid", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		/**
		 * Determines wheather the call to {@link remove} is legal assuming the
		 * iterator is valid. The value must not change in runtime hence the user
		 * of iterator may cache it.
		 */
		g_object_interface_install_property (iface, g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	}
}


/**
 * An iterator over a collection.
 *
 * Gee's iterators are "on-track" iterators. They always point to an item
 * except before the first call to {@link next}, or, when an
 * item has been removed, until the next call to {@link next}.
 *
 * Please note that when the iterator is out of track, neither {@link get} nor
 * {@link remove} are defined and both might fail. After the next call to
 * {@link next}, they will be defined again.
 *
 * Please also note that, unless specified otherwise, iterators before iteration
 * started should behave as if after deletion of the first element. Whenever
 * documentation states about the iterator 'out of track', 'invalid' or
 * 'in-between elements' this refers to the same concept.
 */
GType gee_iterator_get_type (void) {
	static volatile gsize gee_iterator_type_id__volatile = 0;
	if (g_once_init_enter (&gee_iterator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeIteratorIface), (GBaseInitFunc) gee_iterator_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType gee_iterator_type_id;
		gee_iterator_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeIterator", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (gee_iterator_type_id, G_TYPE_OBJECT);
		g_type_interface_add_prerequisite (gee_iterator_type_id, GEE_TYPE_TRAVERSABLE);
		g_once_init_leave (&gee_iterator_type_id__volatile, gee_iterator_type_id);
	}
	return gee_iterator_type_id__volatile;
}



