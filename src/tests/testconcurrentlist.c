/* testconcurrentlist.c generated by valac 0.20.1.1-1480, the Vala compiler
 * generated from testconcurrentlist.vala, do not modify */

/* testconcurrentlist.vala
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

#define TYPE_LIST_TESTS (list_tests_get_type ())
#define LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LIST_TESTS, ListTests))
#define LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LIST_TESTS, ListTestsClass))
#define IS_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LIST_TESTS))
#define IS_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LIST_TESTS))
#define LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LIST_TESTS, ListTestsClass))

typedef struct _ListTests ListTests;
typedef struct _ListTestsClass ListTestsClass;
typedef struct _ListTestsPrivate ListTestsPrivate;

#define TYPE_CONCURRENT_LIST_TESTS (concurrent_list_tests_get_type ())
#define CONCURRENT_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CONCURRENT_LIST_TESTS, ConcurrentListTests))
#define CONCURRENT_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CONCURRENT_LIST_TESTS, ConcurrentListTestsClass))
#define IS_CONCURRENT_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CONCURRENT_LIST_TESTS))
#define IS_CONCURRENT_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CONCURRENT_LIST_TESTS))
#define CONCURRENT_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CONCURRENT_LIST_TESTS, ConcurrentListTestsClass))

typedef struct _ConcurrentListTests ConcurrentListTests;
typedef struct _ConcurrentListTestsClass ConcurrentListTestsClass;
typedef struct _ConcurrentListTestsPrivate ConcurrentListTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

struct _ListTests {
	CollectionTests parent_instance;
	ListTestsPrivate * priv;
};

struct _ListTestsClass {
	CollectionTestsClass parent_class;
	void (*test_duplicates_are_retained) (ListTests* self);
};

struct _ConcurrentListTests {
	ListTests parent_instance;
	ConcurrentListTestsPrivate * priv;
};

struct _ConcurrentListTestsClass {
	ListTestsClass parent_class;
};


static gpointer concurrent_list_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType list_tests_get_type (void) G_GNUC_CONST;
GType concurrent_list_tests_get_type (void) G_GNUC_CONST;
enum  {
	CONCURRENT_LIST_TESTS_DUMMY_PROPERTY
};
ConcurrentListTests* concurrent_list_tests_new (void);
ConcurrentListTests* concurrent_list_tests_construct (GType object_type);
ListTests* list_tests_construct (GType object_type, const gchar* name);
static void concurrent_list_tests_real_set_up (GeeTestCase* base);
static void concurrent_list_tests_real_tear_down (GeeTestCase* base);


ConcurrentListTests* concurrent_list_tests_construct (GType object_type) {
	ConcurrentListTests * self = NULL;
	self = (ConcurrentListTests*) list_tests_construct (object_type, "ConcurrentList");
	return self;
}


ConcurrentListTests* concurrent_list_tests_new (void) {
	return concurrent_list_tests_construct (TYPE_CONCURRENT_LIST_TESTS);
}


static void concurrent_list_tests_real_set_up (GeeTestCase* base) {
	ConcurrentListTests * self;
	GeeConcurrentList* _tmp0_;
	self = (ConcurrentListTests*) base;
	_tmp0_ = gee_concurrent_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}


static void concurrent_list_tests_real_tear_down (GeeTestCase* base) {
	ConcurrentListTests * self;
	self = (ConcurrentListTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}


static void concurrent_list_tests_class_init (ConcurrentListTestsClass * klass) {
	concurrent_list_tests_parent_class = g_type_class_peek_parent (klass);
	GEE_TEST_CASE_CLASS (klass)->set_up = concurrent_list_tests_real_set_up;
	GEE_TEST_CASE_CLASS (klass)->tear_down = concurrent_list_tests_real_tear_down;
}


static void concurrent_list_tests_instance_init (ConcurrentListTests * self) {
}


GType concurrent_list_tests_get_type (void) {
	static volatile gsize concurrent_list_tests_type_id__volatile = 0;
	if (g_once_init_enter (&concurrent_list_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ConcurrentListTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) concurrent_list_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ConcurrentListTests), 0, (GInstanceInitFunc) concurrent_list_tests_instance_init, NULL };
		GType concurrent_list_tests_type_id;
		concurrent_list_tests_type_id = g_type_register_static (TYPE_LIST_TESTS, "ConcurrentListTests", &g_define_type_info, 0);
		g_once_init_leave (&concurrent_list_tests_type_id__volatile, concurrent_list_tests_type_id);
	}
	return concurrent_list_tests_type_id__volatile;
}



