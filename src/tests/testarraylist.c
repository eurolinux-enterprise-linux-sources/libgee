/* testarraylist.c generated by valac 0.36.11, the Vala compiler
 * generated from testarraylist.vala, do not modify */

/* testarraylist.vala
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
#include <float.h>
#include <math.h>


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

#define TYPE_BIDIR_LIST_TESTS (bidir_list_tests_get_type ())
#define BIDIR_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BIDIR_LIST_TESTS, BidirListTests))
#define BIDIR_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BIDIR_LIST_TESTS, BidirListTestsClass))
#define IS_BIDIR_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BIDIR_LIST_TESTS))
#define IS_BIDIR_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BIDIR_LIST_TESTS))
#define BIDIR_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BIDIR_LIST_TESTS, BidirListTestsClass))

typedef struct _BidirListTests BidirListTests;
typedef struct _BidirListTestsClass BidirListTestsClass;
typedef struct _BidirListTestsPrivate BidirListTestsPrivate;

#define TYPE_ARRAY_LIST_TESTS (array_list_tests_get_type ())
#define ARRAY_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ARRAY_LIST_TESTS, ArrayListTests))
#define ARRAY_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ARRAY_LIST_TESTS, ArrayListTestsClass))
#define IS_ARRAY_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ARRAY_LIST_TESTS))
#define IS_ARRAY_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ARRAY_LIST_TESTS))
#define ARRAY_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ARRAY_LIST_TESTS, ArrayListTestsClass))

typedef struct _ArrayListTests ArrayListTests;
typedef struct _ArrayListTestsClass ArrayListTestsClass;
typedef struct _ArrayListTestsPrivate ArrayListTestsPrivate;

#define ARRAY_LIST_TESTS_TYPE_TEST_ENUM (array_list_tests_test_enum_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

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

struct _BidirListTests {
	ListTests parent_instance;
	BidirListTestsPrivate * priv;
};

struct _BidirListTestsClass {
	ListTestsClass parent_class;
};

struct _ArrayListTests {
	BidirListTests parent_instance;
	ArrayListTestsPrivate * priv;
};

struct _ArrayListTestsClass {
	BidirListTestsClass parent_class;
};

typedef enum  {
	ARRAY_LIST_TESTS_TEST_ENUM_ONE,
	ARRAY_LIST_TESTS_TEST_ENUM_TWO,
	ARRAY_LIST_TESTS_TEST_ENUM_THREE
} ArrayListTestsTestEnum;

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer array_list_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType collection_tests_get_type (void) G_GNUC_CONST;
GType list_tests_get_type (void) G_GNUC_CONST;
GType bidir_list_tests_get_type (void) G_GNUC_CONST;
GType array_list_tests_get_type (void) G_GNUC_CONST;
enum  {
	ARRAY_LIST_TESTS_0_PROPERTY
};
static GType array_list_tests_test_enum_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
#define ARRAY_LIST_TESTS_BIG_SORT_SIZE 1000000
ArrayListTests* array_list_tests_new (void);
ArrayListTests* array_list_tests_construct (GType object_type);
BidirListTests* bidir_list_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target, GDestroyNotify test_target_destroy_notify);
void array_list_tests_test_selected_functions (ArrayListTests* self);
static void _array_list_tests_test_selected_functions_gee_test_case_test_method (gpointer self);
static void array_list_tests_test_small_sort (ArrayListTests* self);
static void _array_list_tests_test_small_sort_gee_test_case_test_method (gpointer self);
static void array_list_tests_test_big_sort (ArrayListTests* self);
static void _array_list_tests_test_big_sort_gee_test_case_test_method (gpointer self);
static void array_list_tests_test_typed_to_array (ArrayListTests* self);
static void _array_list_tests_test_typed_to_array_gee_test_case_test_method (gpointer self);
static void array_list_tests_real_set_up (GeeTestCase* base);
static void array_list_tests_real_tear_down (GeeTestCase* base);
static gdouble* _double_dup (gdouble* self);
static gboolean _double_equal (const gdouble * s1, const gdouble * s2);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static GType array_list_tests_test_enum_get_type (void) {
	static volatile gsize array_list_tests_test_enum_type_id__volatile = 0;
	if (g_once_init_enter (&array_list_tests_test_enum_type_id__volatile)) {
		static const GEnumValue values[] = {{ARRAY_LIST_TESTS_TEST_ENUM_ONE, "ARRAY_LIST_TESTS_TEST_ENUM_ONE", "one"}, {ARRAY_LIST_TESTS_TEST_ENUM_TWO, "ARRAY_LIST_TESTS_TEST_ENUM_TWO", "two"}, {ARRAY_LIST_TESTS_TEST_ENUM_THREE, "ARRAY_LIST_TESTS_TEST_ENUM_THREE", "three"}, {0, NULL, NULL}};
		GType array_list_tests_test_enum_type_id;
		array_list_tests_test_enum_type_id = g_enum_register_static ("ArrayListTestsTestEnum", values);
		g_once_init_leave (&array_list_tests_test_enum_type_id__volatile, array_list_tests_test_enum_type_id);
	}
	return array_list_tests_test_enum_type_id__volatile;
}


static void _array_list_tests_test_selected_functions_gee_test_case_test_method (gpointer self) {
	array_list_tests_test_selected_functions ((ArrayListTests*) self);
}


static void _array_list_tests_test_small_sort_gee_test_case_test_method (gpointer self) {
	array_list_tests_test_small_sort ((ArrayListTests*) self);
}


static void _array_list_tests_test_big_sort_gee_test_case_test_method (gpointer self) {
	array_list_tests_test_big_sort ((ArrayListTests*) self);
}


static void _array_list_tests_test_typed_to_array_gee_test_case_test_method (gpointer self) {
	array_list_tests_test_typed_to_array ((ArrayListTests*) self);
}


ArrayListTests* array_list_tests_construct (GType object_type) {
	ArrayListTests * self = NULL;
	self = (ArrayListTests*) bidir_list_tests_construct (object_type, "ArrayList");
	gee_test_case_add_test ((GeeTestCase*) self, "[ArrayList] selected functions", _array_list_tests_test_selected_functions_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	gee_test_case_add_test ((GeeTestCase*) self, "[ArrayList] small sort (insertion)", _array_list_tests_test_small_sort_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	gee_test_case_add_test ((GeeTestCase*) self, "[ArrayList] big sort (timsort)", _array_list_tests_test_big_sort_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	gee_test_case_add_test ((GeeTestCase*) self, "[ArrayList] typed to_array calls", _array_list_tests_test_typed_to_array_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	return self;
}


ArrayListTests* array_list_tests_new (void) {
	return array_list_tests_construct (TYPE_ARRAY_LIST_TESTS);
}


static void array_list_tests_real_set_up (GeeTestCase* base) {
	ArrayListTests * self;
	GeeArrayList* _tmp0_;
	self = (ArrayListTests*) base;
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}


static void array_list_tests_real_tear_down (GeeTestCase* base) {
	ArrayListTests * self;
	self = (ArrayListTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void array_list_tests_test_selected_functions (ArrayListTests* self) {
	GeeArrayList* test_list = NULL;
	GeeCollection* _tmp0_;
	GeeArrayList* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_ARRAY_LIST) ? ((GeeArrayList*) _tmp0_) : NULL);
	test_list = _tmp1_;
	_vala_assert (test_list != NULL, "test_list != null");
	_g_object_unref0 (test_list);
}


static void array_list_tests_test_small_sort (ArrayListTests* self) {
	GeeArrayList* test_list = NULL;
	GeeCollection* _tmp0_;
	GeeArrayList* _tmp1_;
	gpointer _tmp2_;
	gchar* _tmp3_;
	gpointer _tmp4_;
	gchar* _tmp5_;
	gpointer _tmp6_;
	gchar* _tmp7_;
	gpointer _tmp8_;
	gchar* _tmp9_;
	gpointer _tmp10_;
	gchar* _tmp11_;
	gpointer _tmp12_;
	gchar* _tmp13_;
	gpointer _tmp14_;
	gchar* _tmp15_;
	gpointer _tmp16_;
	gchar* _tmp17_;
	gpointer _tmp18_;
	gchar* _tmp19_;
	gpointer _tmp20_;
	gchar* _tmp21_;
	gpointer _tmp22_;
	gchar* _tmp23_;
	gpointer _tmp24_;
	gchar* _tmp25_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_ARRAY_LIST) ? ((GeeArrayList*) _tmp0_) : NULL);
	test_list = _tmp1_;
	_vala_assert (test_list != NULL, "test_list != null");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "one");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "two");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "three");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "four");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "five");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "six");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "seven");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "eight");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "nine");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "ten");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "eleven");
	gee_abstract_collection_add ((GeeAbstractCollection*) test_list, "twelve");
	gee_list_sort ((GeeList*) test_list, NULL, NULL, NULL);
	_tmp2_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 0);
	_tmp3_ = (gchar*) _tmp2_;
	_vala_assert (g_strcmp0 (_tmp3_, "eight") == 0, "test_list.get (0) == \"eight\"");
	_g_free0 (_tmp3_);
	_tmp4_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 1);
	_tmp5_ = (gchar*) _tmp4_;
	_vala_assert (g_strcmp0 (_tmp5_, "eleven") == 0, "test_list.get (1) == \"eleven\"");
	_g_free0 (_tmp5_);
	_tmp6_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 2);
	_tmp7_ = (gchar*) _tmp6_;
	_vala_assert (g_strcmp0 (_tmp7_, "five") == 0, "test_list.get (2) == \"five\"");
	_g_free0 (_tmp7_);
	_tmp8_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 3);
	_tmp9_ = (gchar*) _tmp8_;
	_vala_assert (g_strcmp0 (_tmp9_, "four") == 0, "test_list.get (3) == \"four\"");
	_g_free0 (_tmp9_);
	_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 4);
	_tmp11_ = (gchar*) _tmp10_;
	_vala_assert (g_strcmp0 (_tmp11_, "nine") == 0, "test_list.get (4) == \"nine\"");
	_g_free0 (_tmp11_);
	_tmp12_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 5);
	_tmp13_ = (gchar*) _tmp12_;
	_vala_assert (g_strcmp0 (_tmp13_, "one") == 0, "test_list.get (5) == \"one\"");
	_g_free0 (_tmp13_);
	_tmp14_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 6);
	_tmp15_ = (gchar*) _tmp14_;
	_vala_assert (g_strcmp0 (_tmp15_, "seven") == 0, "test_list.get (6) == \"seven\"");
	_g_free0 (_tmp15_);
	_tmp16_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 7);
	_tmp17_ = (gchar*) _tmp16_;
	_vala_assert (g_strcmp0 (_tmp17_, "six") == 0, "test_list.get (7) == \"six\"");
	_g_free0 (_tmp17_);
	_tmp18_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 8);
	_tmp19_ = (gchar*) _tmp18_;
	_vala_assert (g_strcmp0 (_tmp19_, "ten") == 0, "test_list.get (8) == \"ten\"");
	_g_free0 (_tmp19_);
	_tmp20_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 9);
	_tmp21_ = (gchar*) _tmp20_;
	_vala_assert (g_strcmp0 (_tmp21_, "three") == 0, "test_list.get (9) == \"three\"");
	_g_free0 (_tmp21_);
	_tmp22_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 10);
	_tmp23_ = (gchar*) _tmp22_;
	_vala_assert (g_strcmp0 (_tmp23_, "twelve") == 0, "test_list.get (10) == \"twelve\"");
	_g_free0 (_tmp23_);
	_tmp24_ = gee_abstract_list_get ((GeeAbstractList*) test_list, 11);
	_tmp25_ = (gchar*) _tmp24_;
	_vala_assert (g_strcmp0 (_tmp25_, "two") == 0, "test_list.get (11) == \"two\"");
	_g_free0 (_tmp25_);
	_g_object_unref0 (test_list);
}


static void array_list_tests_test_big_sort (ArrayListTests* self) {
	GeeList* big_test_list = NULL;
	GeeArrayList* _tmp0_;
	GeeList* _tmp6_;
	g_return_if_fail (self != NULL);
	_tmp0_ = gee_array_list_new (G_TYPE_INT, NULL, NULL, NULL, NULL, NULL);
	big_test_list = (GeeList*) _tmp0_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				gint _tmp3_;
				GeeList* _tmp4_;
				gint32 _tmp5_;
				if (!_tmp1_) {
					gint _tmp2_;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp3_ = i;
				if (!(_tmp3_ < ARRAY_LIST_TESTS_BIG_SORT_SIZE)) {
					break;
				}
				_tmp4_ = big_test_list;
				_tmp5_ = g_random_int_range ((gint32) 1, (gint32) (ARRAY_LIST_TESTS_BIG_SORT_SIZE - 1));
				gee_collection_add ((GeeCollection*) _tmp4_, (gpointer) ((gintptr) _tmp5_));
			}
		}
	}
	_tmp6_ = big_test_list;
	gee_list_sort (_tmp6_, NULL, NULL, NULL);
	{
		gint i = 0;
		i = 1;
		{
			gboolean _tmp7_ = FALSE;
			_tmp7_ = TRUE;
			while (TRUE) {
				gint _tmp9_;
				GeeList* _tmp10_;
				gint _tmp11_;
				gpointer _tmp12_;
				GeeList* _tmp13_;
				gint _tmp14_;
				gpointer _tmp15_;
				if (!_tmp7_) {
					gint _tmp8_;
					_tmp8_ = i;
					i = _tmp8_ + 1;
				}
				_tmp7_ = FALSE;
				_tmp9_ = i;
				if (!(_tmp9_ < ARRAY_LIST_TESTS_BIG_SORT_SIZE)) {
					break;
				}
				_tmp10_ = big_test_list;
				_tmp11_ = i;
				_tmp12_ = gee_list_get (_tmp10_, _tmp11_ - 1);
				_tmp13_ = big_test_list;
				_tmp14_ = i;
				_tmp15_ = gee_list_get (_tmp13_, _tmp14_);
				_vala_assert (((gint32) ((gintptr) _tmp12_)) <= ((gint32) ((gintptr) _tmp15_)), "big_test_list[i - 1] <= big_test_list[i]");
			}
		}
	}
	_g_object_unref0 (big_test_list);
}


static gdouble* _double_dup (gdouble* self) {
	gdouble* dup;
	dup = g_new0 (gdouble, 1);
	memcpy (dup, self, sizeof (gdouble));
	return dup;
}


static gboolean _double_equal (const gdouble * s1, const gdouble * s2) {
	if (s1 == s2) {
		return TRUE;
	}
	if (s1 == NULL) {
		return FALSE;
	}
	if (s2 == NULL) {
		return FALSE;
	}
	return (*s1) == (*s2);
}


static void array_list_tests_test_typed_to_array (ArrayListTests* self) {
	GeeList* bool_list = NULL;
	GeeArrayList* _tmp0_;
	GeeList* _tmp1_;
	gboolean _tmp2_;
	GeeList* _tmp3_;
	gboolean _tmp4_;
	GeeList* _tmp5_;
	gboolean _tmp6_;
	gboolean* bool_array = NULL;
	GeeList* _tmp7_;
	gint _tmp8_;
	gpointer* _tmp9_;
	gint bool_array_length1;
	gint _bool_array_size_;
	gint index = 0;
	GeeList* int_list = NULL;
	GeeArrayList* _tmp25_;
	GeeList* _tmp26_;
	gboolean _tmp27_;
	GeeList* _tmp28_;
	gboolean _tmp29_;
	GeeList* _tmp30_;
	gboolean _tmp31_;
	gint* int_array = NULL;
	GeeList* _tmp32_;
	gint _tmp33_;
	gpointer* _tmp34_;
	gint int_array_length1;
	gint _int_array_size_;
	GeeList* double_list = NULL;
	GeeArrayList* _tmp50_;
	GeeList* _tmp51_;
	gdouble _tmp52_;
	gboolean _tmp53_;
	GeeList* _tmp54_;
	gdouble _tmp55_;
	gboolean _tmp56_;
	GeeList* _tmp57_;
	gdouble _tmp58_;
	gboolean _tmp59_;
	gdouble** double_array = NULL;
	GeeList* _tmp60_;
	gint _tmp61_;
	gpointer* _tmp62_;
	gint double_array_length1;
	gint _double_array_size_;
	GeeList* enum_list = NULL;
	GeeArrayList* _tmp80_;
	GeeList* _tmp81_;
	gboolean _tmp82_;
	GeeList* _tmp83_;
	gboolean _tmp84_;
	GeeList* _tmp85_;
	gboolean _tmp86_;
	ArrayListTestsTestEnum* enum_array = NULL;
	GeeList* _tmp87_;
	gint _tmp88_;
	gpointer* _tmp89_;
	gint enum_array_length1;
	gint _enum_array_size_;
	g_return_if_fail (self != NULL);
	_tmp0_ = gee_array_list_new (G_TYPE_BOOLEAN, NULL, NULL, NULL, NULL, NULL);
	bool_list = (GeeList*) _tmp0_;
	_tmp1_ = bool_list;
	_tmp2_ = gee_collection_add ((GeeCollection*) _tmp1_, (gpointer) ((gintptr) TRUE));
	_vala_assert (_tmp2_, "bool_list.add (true)");
	_tmp3_ = bool_list;
	_tmp4_ = gee_collection_add ((GeeCollection*) _tmp3_, (gpointer) ((gintptr) TRUE));
	_vala_assert (_tmp4_, "bool_list.add (true)");
	_tmp5_ = bool_list;
	_tmp6_ = gee_collection_add ((GeeCollection*) _tmp5_, (gpointer) ((gintptr) FALSE));
	_vala_assert (_tmp6_, "bool_list.add (false)");
	_tmp7_ = bool_list;
	_tmp9_ = gee_collection_to_array ((GeeCollection*) _tmp7_, &_tmp8_);
	bool_array = _tmp9_;
	bool_array_length1 = _tmp8_;
	_bool_array_size_ = bool_array_length1;
	index = 0;
	{
		GeeList* _element_list = NULL;
		GeeList* _tmp10_;
		GeeList* _tmp11_;
		gint _element_size = 0;
		GeeList* _tmp12_;
		gint _tmp13_;
		gint _tmp14_;
		gint _element_index = 0;
		_tmp10_ = bool_list;
		_tmp11_ = _g_object_ref0 (_tmp10_);
		_element_list = _tmp11_;
		_tmp12_ = _element_list;
		_tmp13_ = gee_collection_get_size ((GeeCollection*) _tmp12_);
		_tmp14_ = _tmp13_;
		_element_size = _tmp14_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp15_;
			gint _tmp16_;
			gint _tmp17_;
			gboolean element = FALSE;
			GeeList* _tmp18_;
			gint _tmp19_;
			gpointer _tmp20_;
			gboolean _tmp21_;
			gboolean* _tmp22_;
			gint _tmp22__length1;
			gint _tmp23_;
			gboolean _tmp24_;
			_tmp15_ = _element_index;
			_element_index = _tmp15_ + 1;
			_tmp16_ = _element_index;
			_tmp17_ = _element_size;
			if (!(_tmp16_ < _tmp17_)) {
				break;
			}
			_tmp18_ = _element_list;
			_tmp19_ = _element_index;
			_tmp20_ = gee_list_get (_tmp18_, _tmp19_);
			element = (gboolean) ((gintptr) _tmp20_);
			_tmp21_ = element;
			_tmp22_ = bool_array;
			_tmp22__length1 = bool_array_length1;
			_tmp23_ = index;
			index = _tmp23_ + 1;
			_tmp24_ = _tmp22_[_tmp23_];
			_vala_assert (_tmp21_ == _tmp24_, "element == bool_array[index++]");
		}
		_g_object_unref0 (_element_list);
	}
	_tmp25_ = gee_array_list_new (G_TYPE_INT, NULL, NULL, NULL, NULL, NULL);
	int_list = (GeeList*) _tmp25_;
	_tmp26_ = int_list;
	_tmp27_ = gee_collection_add ((GeeCollection*) _tmp26_, (gpointer) ((gintptr) 1));
	_vala_assert (_tmp27_, "int_list.add (1)");
	_tmp28_ = int_list;
	_tmp29_ = gee_collection_add ((GeeCollection*) _tmp28_, (gpointer) ((gintptr) 2));
	_vala_assert (_tmp29_, "int_list.add (2)");
	_tmp30_ = int_list;
	_tmp31_ = gee_collection_add ((GeeCollection*) _tmp30_, (gpointer) ((gintptr) 3));
	_vala_assert (_tmp31_, "int_list.add (3)");
	_tmp32_ = int_list;
	_tmp34_ = gee_collection_to_array ((GeeCollection*) _tmp32_, &_tmp33_);
	int_array = _tmp34_;
	int_array_length1 = _tmp33_;
	_int_array_size_ = int_array_length1;
	index = 0;
	{
		GeeList* _element_list = NULL;
		GeeList* _tmp35_;
		GeeList* _tmp36_;
		gint _element_size = 0;
		GeeList* _tmp37_;
		gint _tmp38_;
		gint _tmp39_;
		gint _element_index = 0;
		_tmp35_ = int_list;
		_tmp36_ = _g_object_ref0 (_tmp35_);
		_element_list = _tmp36_;
		_tmp37_ = _element_list;
		_tmp38_ = gee_collection_get_size ((GeeCollection*) _tmp37_);
		_tmp39_ = _tmp38_;
		_element_size = _tmp39_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp40_;
			gint _tmp41_;
			gint _tmp42_;
			gint element = 0;
			GeeList* _tmp43_;
			gint _tmp44_;
			gpointer _tmp45_;
			gint _tmp46_;
			gint* _tmp47_;
			gint _tmp47__length1;
			gint _tmp48_;
			gint _tmp49_;
			_tmp40_ = _element_index;
			_element_index = _tmp40_ + 1;
			_tmp41_ = _element_index;
			_tmp42_ = _element_size;
			if (!(_tmp41_ < _tmp42_)) {
				break;
			}
			_tmp43_ = _element_list;
			_tmp44_ = _element_index;
			_tmp45_ = gee_list_get (_tmp43_, _tmp44_);
			element = (gint) ((gintptr) _tmp45_);
			_tmp46_ = element;
			_tmp47_ = int_array;
			_tmp47__length1 = int_array_length1;
			_tmp48_ = index;
			index = _tmp48_ + 1;
			_tmp49_ = _tmp47_[_tmp48_];
			_vala_assert (_tmp46_ == _tmp49_, "element == int_array[index++]");
		}
		_g_object_unref0 (_element_list);
	}
	_tmp50_ = gee_array_list_new (G_TYPE_DOUBLE, (GBoxedCopyFunc) _double_dup, (GDestroyNotify) g_free, NULL, NULL, NULL);
	double_list = (GeeList*) _tmp50_;
	_tmp51_ = double_list;
	_tmp52_ = 1.0;
	_tmp53_ = gee_collection_add ((GeeCollection*) _tmp51_, &_tmp52_);
	_vala_assert (_tmp53_, "double_list.add (1.0d)");
	_tmp54_ = double_list;
	_tmp55_ = 1.5;
	_tmp56_ = gee_collection_add ((GeeCollection*) _tmp54_, &_tmp55_);
	_vala_assert (_tmp56_, "double_list.add (1.5d)");
	_tmp57_ = double_list;
	_tmp58_ = 2.0;
	_tmp59_ = gee_collection_add ((GeeCollection*) _tmp57_, &_tmp58_);
	_vala_assert (_tmp59_, "double_list.add (2.0d)");
	_tmp60_ = double_list;
	_tmp62_ = gee_collection_to_array ((GeeCollection*) _tmp60_, &_tmp61_);
	double_array = _tmp62_;
	double_array_length1 = _tmp61_;
	_double_array_size_ = double_array_length1;
	index = 0;
	{
		GeeList* _element_list = NULL;
		GeeList* _tmp63_;
		GeeList* _tmp64_;
		gint _element_size = 0;
		GeeList* _tmp65_;
		gint _tmp66_;
		gint _tmp67_;
		gint _element_index = 0;
		_tmp63_ = double_list;
		_tmp64_ = _g_object_ref0 (_tmp63_);
		_element_list = _tmp64_;
		_tmp65_ = _element_list;
		_tmp66_ = gee_collection_get_size ((GeeCollection*) _tmp65_);
		_tmp67_ = _tmp66_;
		_element_size = _tmp67_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp68_;
			gint _tmp69_;
			gint _tmp70_;
			gdouble element = 0.0;
			GeeList* _tmp71_;
			gint _tmp72_;
			gpointer _tmp73_;
			gdouble* _tmp74_;
			gdouble _tmp75_;
			gdouble _tmp76_;
			gdouble** _tmp77_;
			gint _tmp77__length1;
			gint _tmp78_;
			gdouble* _tmp79_;
			_tmp68_ = _element_index;
			_element_index = _tmp68_ + 1;
			_tmp69_ = _element_index;
			_tmp70_ = _element_size;
			if (!(_tmp69_ < _tmp70_)) {
				break;
			}
			_tmp71_ = _element_list;
			_tmp72_ = _element_index;
			_tmp73_ = gee_list_get (_tmp71_, _tmp72_);
			_tmp74_ = (gdouble*) _tmp73_;
			_tmp75_ = *_tmp74_;
			_g_free0 (_tmp74_);
			element = _tmp75_;
			_tmp76_ = element;
			_tmp77_ = double_array;
			_tmp77__length1 = double_array_length1;
			_tmp78_ = index;
			index = _tmp78_ + 1;
			_tmp79_ = _tmp77_[_tmp78_];
			_vala_assert (_double_equal (&_tmp76_, _tmp79_) == TRUE, "element == double_array[index++]");
		}
		_g_object_unref0 (_element_list);
	}
	_tmp80_ = gee_array_list_new (ARRAY_LIST_TESTS_TYPE_TEST_ENUM, NULL, NULL, NULL, NULL, NULL);
	enum_list = (GeeList*) _tmp80_;
	_tmp81_ = enum_list;
	_tmp82_ = gee_collection_add ((GeeCollection*) _tmp81_, (gpointer) ((gintptr) ARRAY_LIST_TESTS_TEST_ENUM_ONE));
	_vala_assert (_tmp82_, "enum_list.add (TestEnum.ONE)");
	_tmp83_ = enum_list;
	_tmp84_ = gee_collection_add ((GeeCollection*) _tmp83_, (gpointer) ((gintptr) ARRAY_LIST_TESTS_TEST_ENUM_TWO));
	_vala_assert (_tmp84_, "enum_list.add (TestEnum.TWO)");
	_tmp85_ = enum_list;
	_tmp86_ = gee_collection_add ((GeeCollection*) _tmp85_, (gpointer) ((gintptr) ARRAY_LIST_TESTS_TEST_ENUM_THREE));
	_vala_assert (_tmp86_, "enum_list.add (TestEnum.THREE)");
	_tmp87_ = enum_list;
	_tmp89_ = gee_collection_to_array ((GeeCollection*) _tmp87_, &_tmp88_);
	enum_array = _tmp89_;
	enum_array_length1 = _tmp88_;
	_enum_array_size_ = enum_array_length1;
	index = 0;
	{
		GeeList* _element_list = NULL;
		GeeList* _tmp90_;
		GeeList* _tmp91_;
		gint _element_size = 0;
		GeeList* _tmp92_;
		gint _tmp93_;
		gint _tmp94_;
		gint _element_index = 0;
		_tmp90_ = enum_list;
		_tmp91_ = _g_object_ref0 (_tmp90_);
		_element_list = _tmp91_;
		_tmp92_ = _element_list;
		_tmp93_ = gee_collection_get_size ((GeeCollection*) _tmp92_);
		_tmp94_ = _tmp93_;
		_element_size = _tmp94_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp95_;
			gint _tmp96_;
			gint _tmp97_;
			ArrayListTestsTestEnum element = 0;
			GeeList* _tmp98_;
			gint _tmp99_;
			gpointer _tmp100_;
			ArrayListTestsTestEnum _tmp101_;
			ArrayListTestsTestEnum* _tmp102_;
			gint _tmp102__length1;
			gint _tmp103_;
			ArrayListTestsTestEnum _tmp104_;
			_tmp95_ = _element_index;
			_element_index = _tmp95_ + 1;
			_tmp96_ = _element_index;
			_tmp97_ = _element_size;
			if (!(_tmp96_ < _tmp97_)) {
				break;
			}
			_tmp98_ = _element_list;
			_tmp99_ = _element_index;
			_tmp100_ = gee_list_get (_tmp98_, _tmp99_);
			element = (ArrayListTestsTestEnum) ((gintptr) _tmp100_);
			_tmp101_ = element;
			_tmp102_ = enum_array;
			_tmp102__length1 = enum_array_length1;
			_tmp103_ = index;
			index = _tmp103_ + 1;
			_tmp104_ = _tmp102_[_tmp103_];
			_vala_assert (_tmp101_ == _tmp104_, "element == enum_array[index++]");
		}
		_g_object_unref0 (_element_list);
	}
	enum_array = (g_free (enum_array), NULL);
	_g_object_unref0 (enum_list);
	double_array = (_vala_array_free (double_array, double_array_length1, (GDestroyNotify) g_free), NULL);
	_g_object_unref0 (double_list);
	int_array = (g_free (int_array), NULL);
	_g_object_unref0 (int_list);
	bool_array = (g_free (bool_array), NULL);
	_g_object_unref0 (bool_list);
}


static void array_list_tests_class_init (ArrayListTestsClass * klass) {
	array_list_tests_parent_class = g_type_class_peek_parent (klass);
	((GeeTestCaseClass *) klass)->set_up = (void (*) (GeeTestCase *)) array_list_tests_real_set_up;
	((GeeTestCaseClass *) klass)->tear_down = (void (*) (GeeTestCase *)) array_list_tests_real_tear_down;
}


static void array_list_tests_instance_init (ArrayListTests * self) {
}


GType array_list_tests_get_type (void) {
	static volatile gsize array_list_tests_type_id__volatile = 0;
	if (g_once_init_enter (&array_list_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ArrayListTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) array_list_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ArrayListTests), 0, (GInstanceInitFunc) array_list_tests_instance_init, NULL };
		GType array_list_tests_type_id;
		array_list_tests_type_id = g_type_register_static (TYPE_BIDIR_LIST_TESTS, "ArrayListTests", &g_define_type_info, 0);
		g_once_init_leave (&array_list_tests_type_id__volatile, array_list_tests_type_id);
	}
	return array_list_tests_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



