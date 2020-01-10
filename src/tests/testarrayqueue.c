/* testarrayqueue.c generated by valac 0.36.11, the Vala compiler
 * generated from testarrayqueue.vala, do not modify */

/* arrayqueue.vala
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

#define TYPE_QUEUE_TESTS (queue_tests_get_type ())
#define QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_QUEUE_TESTS, QueueTests))
#define QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_QUEUE_TESTS, QueueTestsClass))
#define IS_QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_QUEUE_TESTS))
#define IS_QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_QUEUE_TESTS))
#define QUEUE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_QUEUE_TESTS, QueueTestsClass))

typedef struct _QueueTests QueueTests;
typedef struct _QueueTestsClass QueueTestsClass;
typedef struct _QueueTestsPrivate QueueTestsPrivate;

#define TYPE_DEQUE_TESTS (deque_tests_get_type ())
#define DEQUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DEQUE_TESTS, DequeTests))
#define DEQUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DEQUE_TESTS, DequeTestsClass))
#define IS_DEQUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DEQUE_TESTS))
#define IS_DEQUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DEQUE_TESTS))
#define DEQUE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DEQUE_TESTS, DequeTestsClass))

typedef struct _DequeTests DequeTests;
typedef struct _DequeTestsClass DequeTestsClass;
typedef struct _DequeTestsPrivate DequeTestsPrivate;

#define TYPE_ARRAY_QUEUE_TESTS (array_queue_tests_get_type ())
#define ARRAY_QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ARRAY_QUEUE_TESTS, ArrayQueueTests))
#define ARRAY_QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ARRAY_QUEUE_TESTS, ArrayQueueTestsClass))
#define IS_ARRAY_QUEUE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ARRAY_QUEUE_TESTS))
#define IS_ARRAY_QUEUE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ARRAY_QUEUE_TESTS))
#define ARRAY_QUEUE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ARRAY_QUEUE_TESTS, ArrayQueueTestsClass))

typedef struct _ArrayQueueTests ArrayQueueTests;
typedef struct _ArrayQueueTestsClass ArrayQueueTestsClass;
typedef struct _ArrayQueueTestsPrivate ArrayQueueTestsPrivate;
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

struct _QueueTests {
	CollectionTests parent_instance;
	QueueTestsPrivate * priv;
};

struct _QueueTestsClass {
	CollectionTestsClass parent_class;
};

struct _DequeTests {
	QueueTests parent_instance;
	DequeTestsPrivate * priv;
};

struct _DequeTestsClass {
	QueueTestsClass parent_class;
};

struct _ArrayQueueTests {
	DequeTests parent_instance;
	ArrayQueueTestsPrivate * priv;
};

struct _ArrayQueueTestsClass {
	DequeTestsClass parent_class;
};


static gpointer array_queue_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType queue_tests_get_type (void) G_GNUC_CONST;
GType deque_tests_get_type (void) G_GNUC_CONST;
GType array_queue_tests_get_type (void) G_GNUC_CONST;
enum  {
	ARRAY_QUEUE_TESTS_0_PROPERTY
};
ArrayQueueTests* array_queue_tests_new (void);
ArrayQueueTests* array_queue_tests_construct (GType object_type);
DequeTests* deque_tests_construct (GType object_type, const gchar* name);
static void array_queue_tests_real_set_up (GeeTestCase* base);
static void array_queue_tests_real_tear_down (GeeTestCase* base);


ArrayQueueTests* array_queue_tests_construct (GType object_type) {
	ArrayQueueTests * self = NULL;
	self = (ArrayQueueTests*) deque_tests_construct (object_type, "ArrayQueue");
	return self;
}


ArrayQueueTests* array_queue_tests_new (void) {
	return array_queue_tests_construct (TYPE_ARRAY_QUEUE_TESTS);
}


static void array_queue_tests_real_set_up (GeeTestCase* base) {
	ArrayQueueTests * self;
	GeeArrayQueue* _tmp0_;
	self = (ArrayQueueTests*) base;
	_tmp0_ = gee_array_queue_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}


static void array_queue_tests_real_tear_down (GeeTestCase* base) {
	ArrayQueueTests * self;
	self = (ArrayQueueTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}


static void array_queue_tests_class_init (ArrayQueueTestsClass * klass) {
	array_queue_tests_parent_class = g_type_class_peek_parent (klass);
	((GeeTestCaseClass *) klass)->set_up = (void (*) (GeeTestCase *)) array_queue_tests_real_set_up;
	((GeeTestCaseClass *) klass)->tear_down = (void (*) (GeeTestCase *)) array_queue_tests_real_tear_down;
}


static void array_queue_tests_instance_init (ArrayQueueTests * self) {
}


GType array_queue_tests_get_type (void) {
	static volatile gsize array_queue_tests_type_id__volatile = 0;
	if (g_once_init_enter (&array_queue_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ArrayQueueTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) array_queue_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ArrayQueueTests), 0, (GInstanceInitFunc) array_queue_tests_instance_init, NULL };
		GType array_queue_tests_type_id;
		array_queue_tests_type_id = g_type_register_static (TYPE_DEQUE_TESTS, "ArrayQueueTests", &g_define_type_info, 0);
		g_once_init_leave (&array_queue_tests_type_id__volatile, array_queue_tests_type_id);
	}
	return array_queue_tests_type_id__volatile;
}



