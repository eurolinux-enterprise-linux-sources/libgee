/* testhashmultiset.c generated by valac 0.20.1.1-1480, the Vala compiler
 * generated from testhashmultiset.vala, do not modify */

/* testhashmultiset.vala
 *
 * Copyright (C) 2008  Jürg Billeter
 * Copyright (C) 2009  Didier Villevalois, Julien Peeters
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
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 * 	Julien Peeters <contact@julienpeeters.fr>
 */

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define TYPE_COLLECTION_TESTS (collection_tests_get_type ())
#define COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COLLECTION_TESTS, CollectionTests))
#define COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COLLECTION_TESTS, CollectionTestsClass))
#define IS_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COLLECTION_TESTS))
#define IS_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COLLECTION_TESTS))
#define COLLECTION_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COLLECTION_TESTS, CollectionTestsClass))

typedef struct _CollectionTests CollectionTests;
typedef struct _CollectionTestsClass CollectionTestsClass;
typedef struct _CollectionTestsPrivate CollectionTestsPrivate;

#define TYPE_MULTI_SET_TESTS (multi_set_tests_get_type ())
#define MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MULTI_SET_TESTS, MultiSetTests))
#define MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MULTI_SET_TESTS, MultiSetTestsClass))
#define IS_MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MULTI_SET_TESTS))
#define IS_MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MULTI_SET_TESTS))
#define MULTI_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MULTI_SET_TESTS, MultiSetTestsClass))

typedef struct _MultiSetTests MultiSetTests;
typedef struct _MultiSetTestsClass MultiSetTestsClass;
typedef struct _MultiSetTestsPrivate MultiSetTestsPrivate;

#define TYPE_HASH_MULTI_SET_TESTS (hash_multi_set_tests_get_type ())
#define HASH_MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HASH_MULTI_SET_TESTS, HashMultiSetTests))
#define HASH_MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HASH_MULTI_SET_TESTS, HashMultiSetTestsClass))
#define IS_HASH_MULTI_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HASH_MULTI_SET_TESTS))
#define IS_HASH_MULTI_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HASH_MULTI_SET_TESTS))
#define HASH_MULTI_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HASH_MULTI_SET_TESTS, HashMultiSetTestsClass))

typedef struct _HashMultiSetTests HashMultiSetTests;
typedef struct _HashMultiSetTestsClass HashMultiSetTestsClass;
typedef struct _HashMultiSetTestsPrivate HashMultiSetTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _CollectionTests {
	GeeTestCase parent_instance;
	CollectionTestsPrivate * priv;
	GeeCollection* test_collection;
};

struct _CollectionTestsClass {
	GeeTestCaseClass parent_class;
};

struct _MultiSetTests {
	CollectionTests parent_instance;
	MultiSetTestsPrivate * priv;
};

struct _MultiSetTestsClass {
	CollectionTestsClass parent_class;
};

struct _HashMultiSetTests {
	MultiSetTests parent_instance;
	HashMultiSetTestsPrivate * priv;
};

struct _HashMultiSetTestsClass {
	MultiSetTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer hash_multi_set_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType multi_set_tests_get_type (void) G_GNUC_CONST;
GType hash_multi_set_tests_get_type (void) G_GNUC_CONST;
enum  {
	HASH_MULTI_SET_TESTS_DUMMY_PROPERTY
};
HashMultiSetTests* hash_multi_set_tests_new (void);
HashMultiSetTests* hash_multi_set_tests_construct (GType object_type);
MultiSetTests* multi_set_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target, GDestroyNotify test_target_destroy_notify);
static void hash_multi_set_tests_test_selected_functions (HashMultiSetTests* self);
static void _hash_multi_set_tests_test_selected_functions_gee_test_case_test_method (gpointer self);
static void hash_multi_set_tests_real_set_up (GeeTestCase* base);
static void hash_multi_set_tests_real_tear_down (GeeTestCase* base);


static void _hash_multi_set_tests_test_selected_functions_gee_test_case_test_method (gpointer self) {
	hash_multi_set_tests_test_selected_functions (self);
}


HashMultiSetTests* hash_multi_set_tests_construct (GType object_type) {
	HashMultiSetTests * self = NULL;
	self = (HashMultiSetTests*) multi_set_tests_construct (object_type, "HashMultiSet");
	gee_test_case_add_test ((GeeTestCase*) self, "[HashMultiSet] selected functions", _hash_multi_set_tests_test_selected_functions_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	return self;
}


HashMultiSetTests* hash_multi_set_tests_new (void) {
	return hash_multi_set_tests_construct (TYPE_HASH_MULTI_SET_TESTS);
}


static void hash_multi_set_tests_real_set_up (GeeTestCase* base) {
	HashMultiSetTests * self;
	GeeHashMultiSet* _tmp0_;
	self = (HashMultiSetTests*) base;
	_tmp0_ = gee_hash_multi_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}


static void hash_multi_set_tests_real_tear_down (GeeTestCase* base) {
	HashMultiSetTests * self;
	self = (HashMultiSetTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void hash_multi_set_tests_test_selected_functions (HashMultiSetTests* self) {
	GeeCollection* _tmp0_;
	GeeHashMultiSet* _tmp1_;
	GeeHashMultiSet* test_multi_set;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_HASH_MULTI_SET) ? ((GeeHashMultiSet*) _tmp0_) : NULL);
	test_multi_set = _tmp1_;
	_vala_assert (test_multi_set != NULL, "test_multi_set != null");
	_g_object_unref0 (test_multi_set);
}


static void hash_multi_set_tests_class_init (HashMultiSetTestsClass * klass) {
	hash_multi_set_tests_parent_class = g_type_class_peek_parent (klass);
	GEE_TEST_CASE_CLASS (klass)->set_up = hash_multi_set_tests_real_set_up;
	GEE_TEST_CASE_CLASS (klass)->tear_down = hash_multi_set_tests_real_tear_down;
}


static void hash_multi_set_tests_instance_init (HashMultiSetTests * self) {
}


GType hash_multi_set_tests_get_type (void) {
	static volatile gsize hash_multi_set_tests_type_id__volatile = 0;
	if (g_once_init_enter (&hash_multi_set_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (HashMultiSetTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) hash_multi_set_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (HashMultiSetTests), 0, (GInstanceInitFunc) hash_multi_set_tests_instance_init, NULL };
		GType hash_multi_set_tests_type_id;
		hash_multi_set_tests_type_id = g_type_register_static (TYPE_MULTI_SET_TESTS, "HashMultiSetTests", &g_define_type_info, 0);
		g_once_init_leave (&hash_multi_set_tests_type_id__volatile, hash_multi_set_tests_type_id);
	}
	return hash_multi_set_tests_type_id__volatile;
}



