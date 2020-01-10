/* testhashmap.c generated by valac 0.36.11, the Vala compiler
 * generated from testhashmap.vala, do not modify */

/* testhashmap.vala
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

#define TYPE_MAP_TESTS (map_tests_get_type ())
#define MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAP_TESTS, MapTests))
#define MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAP_TESTS, MapTestsClass))
#define IS_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAP_TESTS))
#define IS_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAP_TESTS))
#define MAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAP_TESTS, MapTestsClass))

typedef struct _MapTests MapTests;
typedef struct _MapTestsClass MapTestsClass;
typedef struct _MapTestsPrivate MapTestsPrivate;

#define TYPE_HASH_MAP_TESTS (hash_map_tests_get_type ())
#define HASH_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HASH_MAP_TESTS, HashMapTests))
#define HASH_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HASH_MAP_TESTS, HashMapTestsClass))
#define IS_HASH_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HASH_MAP_TESTS))
#define IS_HASH_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HASH_MAP_TESTS))
#define HASH_MAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HASH_MAP_TESTS, HashMapTestsClass))

typedef struct _HashMapTests HashMapTests;
typedef struct _HashMapTestsClass HashMapTestsClass;
typedef struct _HashMapTestsPrivate HashMapTestsPrivate;
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

struct _MapTests {
	GeeTestCase parent_instance;
	MapTestsPrivate * priv;
	GeeMap* test_map;
};

struct _MapTestsClass {
	GeeTestCaseClass parent_class;
};

struct _HashMapTests {
	MapTests parent_instance;
	HashMapTestsPrivate * priv;
};

struct _HashMapTestsClass {
	MapTestsClass parent_class;
};


static gpointer hash_map_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType map_tests_get_type (void) G_GNUC_CONST;
GType hash_map_tests_get_type (void) G_GNUC_CONST;
enum  {
	HASH_MAP_TESTS_0_PROPERTY
};
HashMapTests* hash_map_tests_new (void);
HashMapTests* hash_map_tests_construct (GType object_type);
MapTests* map_tests_construct (GType object_type, const gchar* name);
static void hash_map_tests_real_set_up (GeeTestCase* base);
static void hash_map_tests_real_tear_down (GeeTestCase* base);


HashMapTests* hash_map_tests_construct (GType object_type) {
	HashMapTests * self = NULL;
	self = (HashMapTests*) map_tests_construct (object_type, "HashMap");
	return self;
}


HashMapTests* hash_map_tests_new (void) {
	return hash_map_tests_construct (TYPE_HASH_MAP_TESTS);
}


static void hash_map_tests_real_set_up (GeeTestCase* base) {
	HashMapTests * self;
	GeeHashMap* _tmp0_;
	self = (HashMapTests*) base;
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (((MapTests*) self)->test_map);
	((MapTests*) self)->test_map = (GeeMap*) _tmp0_;
}


static void hash_map_tests_real_tear_down (GeeTestCase* base) {
	HashMapTests * self;
	self = (HashMapTests*) base;
	_g_object_unref0 (((MapTests*) self)->test_map);
	((MapTests*) self)->test_map = NULL;
}


static void hash_map_tests_class_init (HashMapTestsClass * klass) {
	hash_map_tests_parent_class = g_type_class_peek_parent (klass);
	((GeeTestCaseClass *) klass)->set_up = (void (*) (GeeTestCase *)) hash_map_tests_real_set_up;
	((GeeTestCaseClass *) klass)->tear_down = (void (*) (GeeTestCase *)) hash_map_tests_real_tear_down;
}


static void hash_map_tests_instance_init (HashMapTests * self) {
}


GType hash_map_tests_get_type (void) {
	static volatile gsize hash_map_tests_type_id__volatile = 0;
	if (g_once_init_enter (&hash_map_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (HashMapTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) hash_map_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (HashMapTests), 0, (GInstanceInitFunc) hash_map_tests_instance_init, NULL };
		GType hash_map_tests_type_id;
		hash_map_tests_type_id = g_type_register_static (TYPE_MAP_TESTS, "HashMapTests", &g_define_type_info, 0);
		g_once_init_leave (&hash_map_tests_type_id__volatile, hash_map_tests_type_id);
	}
	return hash_map_tests_type_id__volatile;
}



