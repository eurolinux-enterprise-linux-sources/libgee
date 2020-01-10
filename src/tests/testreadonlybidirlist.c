/* testreadonlybidirlist.c generated by valac 0.20.1.1-1480, the Vala compiler
 * generated from testreadonlybidirlist.vala, do not modify */

/* testreadonlybidirlist.vala
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

#define TYPE_READ_ONLY_COLLECTION_TESTS (read_only_collection_tests_get_type ())
#define READ_ONLY_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_READ_ONLY_COLLECTION_TESTS, ReadOnlyCollectionTests))
#define READ_ONLY_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_READ_ONLY_COLLECTION_TESTS, ReadOnlyCollectionTestsClass))
#define IS_READ_ONLY_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_READ_ONLY_COLLECTION_TESTS))
#define IS_READ_ONLY_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_READ_ONLY_COLLECTION_TESTS))
#define READ_ONLY_COLLECTION_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_READ_ONLY_COLLECTION_TESTS, ReadOnlyCollectionTestsClass))

typedef struct _ReadOnlyCollectionTests ReadOnlyCollectionTests;
typedef struct _ReadOnlyCollectionTestsClass ReadOnlyCollectionTestsClass;
typedef struct _ReadOnlyCollectionTestsPrivate ReadOnlyCollectionTestsPrivate;

#define TYPE_READ_ONLY_LIST_TESTS (read_only_list_tests_get_type ())
#define READ_ONLY_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_READ_ONLY_LIST_TESTS, ReadOnlyListTests))
#define READ_ONLY_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_READ_ONLY_LIST_TESTS, ReadOnlyListTestsClass))
#define IS_READ_ONLY_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_READ_ONLY_LIST_TESTS))
#define IS_READ_ONLY_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_READ_ONLY_LIST_TESTS))
#define READ_ONLY_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_READ_ONLY_LIST_TESTS, ReadOnlyListTestsClass))

typedef struct _ReadOnlyListTests ReadOnlyListTests;
typedef struct _ReadOnlyListTestsClass ReadOnlyListTestsClass;
typedef struct _ReadOnlyListTestsPrivate ReadOnlyListTestsPrivate;

#define TYPE_READ_ONLY_BIDIR_LIST_TESTS (read_only_bidir_list_tests_get_type ())
#define READ_ONLY_BIDIR_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_READ_ONLY_BIDIR_LIST_TESTS, ReadOnlyBidirListTests))
#define READ_ONLY_BIDIR_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_READ_ONLY_BIDIR_LIST_TESTS, ReadOnlyBidirListTestsClass))
#define IS_READ_ONLY_BIDIR_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_READ_ONLY_BIDIR_LIST_TESTS))
#define IS_READ_ONLY_BIDIR_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_READ_ONLY_BIDIR_LIST_TESTS))
#define READ_ONLY_BIDIR_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_READ_ONLY_BIDIR_LIST_TESTS, ReadOnlyBidirListTestsClass))

typedef struct _ReadOnlyBidirListTests ReadOnlyBidirListTests;
typedef struct _ReadOnlyBidirListTestsClass ReadOnlyBidirListTestsClass;
typedef struct _ReadOnlyBidirListTestsPrivate ReadOnlyBidirListTestsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
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

struct _ReadOnlyCollectionTests {
	GeeTestCase parent_instance;
	ReadOnlyCollectionTestsPrivate * priv;
	GeeCollection* test_collection;
	GeeCollection* ro_collection;
};

struct _ReadOnlyCollectionTestsClass {
	GeeTestCaseClass parent_class;
	GeeCollection* (*get_ro_view) (ReadOnlyCollectionTests* self, GeeCollection* collection);
};

struct _ReadOnlyListTests {
	ReadOnlyCollectionTests parent_instance;
	ReadOnlyListTestsPrivate * priv;
};

struct _ReadOnlyListTestsClass {
	ReadOnlyCollectionTestsClass parent_class;
};

struct _ReadOnlyBidirListTests {
	ReadOnlyListTests parent_instance;
	ReadOnlyBidirListTestsPrivate * priv;
};

struct _ReadOnlyBidirListTestsClass {
	ReadOnlyListTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer read_only_bidir_list_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType read_only_collection_tests_get_type (void) G_GNUC_CONST;
GType read_only_list_tests_get_type (void) G_GNUC_CONST;
GType read_only_bidir_list_tests_get_type (void) G_GNUC_CONST;
enum  {
	READ_ONLY_BIDIR_LIST_TESTS_DUMMY_PROPERTY
};
ReadOnlyBidirListTests* read_only_bidir_list_tests_new (void);
ReadOnlyBidirListTests* read_only_bidir_list_tests_construct (GType object_type);
ReadOnlyListTests* read_only_list_tests_new_with_name (const gchar* name);
ReadOnlyListTests* read_only_list_tests_construct_with_name (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target, GDestroyNotify test_target_destroy_notify);
void read_only_bidir_list_tests_test_immutable_iterator (ReadOnlyBidirListTests* self);
static void _read_only_bidir_list_tests_test_immutable_iterator_gee_test_case_test_method (gpointer self);
static GeeCollection* read_only_bidir_list_tests_real_get_ro_view (ReadOnlyCollectionTests* base, GeeCollection* collection);


static void _read_only_bidir_list_tests_test_immutable_iterator_gee_test_case_test_method (gpointer self) {
	read_only_bidir_list_tests_test_immutable_iterator (self);
}


ReadOnlyBidirListTests* read_only_bidir_list_tests_construct (GType object_type) {
	ReadOnlyBidirListTests * self = NULL;
	self = (ReadOnlyBidirListTests*) read_only_list_tests_construct_with_name (object_type, "ReadOnlyBidirList");
	gee_test_case_add_test ((GeeTestCase*) self, "[ReadOnlyBidirList] immutable iterator", _read_only_bidir_list_tests_test_immutable_iterator_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	return self;
}


ReadOnlyBidirListTests* read_only_bidir_list_tests_new (void) {
	return read_only_bidir_list_tests_construct (TYPE_READ_ONLY_BIDIR_LIST_TESTS);
}


static GeeCollection* read_only_bidir_list_tests_real_get_ro_view (ReadOnlyCollectionTests* base, GeeCollection* collection) {
	ReadOnlyBidirListTests * self;
	GeeCollection* result = NULL;
	GeeCollection* _tmp0_;
	GeeBidirList* _tmp1_;
	GeeBidirList* _tmp2_;
	self = (ReadOnlyBidirListTests*) base;
	g_return_val_if_fail (collection != NULL, NULL);
	_tmp0_ = collection;
	_tmp1_ = gee_bidir_list_get_read_only_view (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_BIDIR_LIST, GeeBidirList));
	_tmp2_ = _tmp1_;
	result = (GeeCollection*) _tmp2_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void read_only_bidir_list_tests_test_immutable_iterator (ReadOnlyBidirListTests* self) {
	GeeCollection* _tmp0_;
	GeeBidirList* _tmp1_;
	GeeBidirList* test_list;
	GeeCollection* _tmp2_;
	GeeBidirList* _tmp3_;
	GeeBidirList* ro_list;
	GeeBidirList* _tmp4_;
	gboolean _tmp5_ = FALSE;
	GeeBidirList* _tmp6_;
	gboolean _tmp7_ = FALSE;
	GeeBidirList* _tmp8_;
	gint _tmp9_;
	gint _tmp10_;
	GeeBidirList* _tmp11_;
	gpointer _tmp12_ = NULL;
	gchar* _tmp13_;
	GeeBidirList* _tmp14_;
	gpointer _tmp15_ = NULL;
	gchar* _tmp16_;
	GeeBidirList* _tmp17_;
	GeeBidirListIterator* _tmp18_ = NULL;
	GeeBidirListIterator* iterator;
	GeeBidirListIterator* _tmp19_;
	gboolean _tmp20_ = FALSE;
	GeeBidirListIterator* _tmp21_;
	gboolean _tmp22_ = FALSE;
	GeeBidirListIterator* _tmp23_;
	gpointer _tmp24_ = NULL;
	gchar* _tmp25_;
	GeeBidirListIterator* _tmp26_;
	gint _tmp27_ = 0;
	GeeBidirListIterator* _tmp28_;
	gboolean _tmp29_ = FALSE;
	GeeBidirListIterator* _tmp30_;
	gboolean _tmp31_ = FALSE;
	GeeBidirListIterator* _tmp32_;
	gpointer _tmp33_ = NULL;
	gchar* _tmp34_;
	GeeBidirListIterator* _tmp35_;
	gint _tmp36_ = 0;
	GeeBidirListIterator* _tmp37_;
	gboolean _tmp38_ = FALSE;
	GeeBidirListIterator* _tmp39_;
	gboolean _tmp40_ = FALSE;
	GeeBidirListIterator* _tmp41_;
	gboolean _tmp42_ = FALSE;
	GeeBidirListIterator* _tmp43_;
	gboolean _tmp44_ = FALSE;
	GeeBidirListIterator* _tmp45_;
	gpointer _tmp46_ = NULL;
	gchar* _tmp47_;
	GeeBidirListIterator* _tmp48_;
	gint _tmp49_ = 0;
	GeeBidirListIterator* _tmp50_;
	gboolean _tmp51_ = FALSE;
	GeeBidirListIterator* _tmp52_;
	gpointer _tmp53_ = NULL;
	gchar* _tmp54_;
	GeeBidirListIterator* _tmp55_;
	gint _tmp56_ = 0;
	GeeBidirListIterator* _tmp57_;
	gboolean _tmp58_ = FALSE;
	GeeBidirListIterator* _tmp59_;
	gpointer _tmp60_ = NULL;
	gchar* _tmp61_;
	GeeBidirListIterator* _tmp62_;
	gint _tmp63_ = 0;
	gboolean _tmp64_ = FALSE;
	GeeBidirList* _tmp66_;
	gint _tmp67_;
	gint _tmp68_;
	GeeBidirList* _tmp69_;
	gpointer _tmp70_ = NULL;
	gchar* _tmp71_;
	GeeBidirList* _tmp72_;
	gpointer _tmp73_ = NULL;
	gchar* _tmp74_;
	GeeBidirListIterator* _tmp75_;
	gint _tmp76_ = 0;
	gboolean _tmp77_ = FALSE;
	GeeBidirList* _tmp79_;
	gint _tmp80_;
	gint _tmp81_;
	GeeBidirList* _tmp82_;
	gpointer _tmp83_ = NULL;
	gchar* _tmp84_;
	GeeBidirList* _tmp85_;
	gpointer _tmp86_ = NULL;
	gchar* _tmp87_;
	GeeBidirListIterator* _tmp88_;
	gint _tmp89_ = 0;
	gboolean _tmp90_ = FALSE;
	GeeBidirList* _tmp92_;
	gint _tmp93_;
	gint _tmp94_;
	GeeBidirList* _tmp95_;
	gpointer _tmp96_ = NULL;
	gchar* _tmp97_;
	GeeBidirList* _tmp98_;
	gpointer _tmp99_ = NULL;
	gchar* _tmp100_;
	GeeBidirListIterator* _tmp101_;
	gint _tmp102_ = 0;
	gboolean _tmp103_ = FALSE;
	GeeBidirList* _tmp105_;
	gint _tmp106_;
	gint _tmp107_;
	GeeBidirList* _tmp108_;
	gpointer _tmp109_ = NULL;
	gchar* _tmp110_;
	GeeBidirList* _tmp111_;
	gpointer _tmp112_ = NULL;
	gchar* _tmp113_;
	GeeBidirListIterator* _tmp114_;
	gint _tmp115_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((ReadOnlyCollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_BIDIR_LIST) ? ((GeeBidirList*) _tmp0_) : NULL);
	test_list = _tmp1_;
	_tmp2_ = ((ReadOnlyCollectionTests*) self)->ro_collection;
	_tmp3_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, GEE_TYPE_BIDIR_LIST) ? ((GeeBidirList*) _tmp2_) : NULL);
	ro_list = _tmp3_;
	_tmp4_ = test_list;
	_tmp5_ = gee_collection_add ((GeeCollection*) _tmp4_, "one");
	_vala_assert (_tmp5_, "test_list.add (\"one\")");
	_tmp6_ = test_list;
	_tmp7_ = gee_collection_add ((GeeCollection*) _tmp6_, "two");
	_vala_assert (_tmp7_, "test_list.add (\"two\")");
	_tmp8_ = ro_list;
	_tmp9_ = gee_collection_get_size ((GeeCollection*) _tmp8_);
	_tmp10_ = _tmp9_;
	_vala_assert (_tmp10_ == 2, "ro_list.size == 2");
	_tmp11_ = ro_list;
	_tmp12_ = gee_list_get ((GeeList*) _tmp11_, 0);
	_tmp13_ = (gchar*) _tmp12_;
	_vala_assert (g_strcmp0 (_tmp13_, "one") == 0, "ro_list.get (0) == \"one\"");
	_g_free0 (_tmp13_);
	_tmp14_ = ro_list;
	_tmp15_ = gee_list_get ((GeeList*) _tmp14_, 1);
	_tmp16_ = (gchar*) _tmp15_;
	_vala_assert (g_strcmp0 (_tmp16_, "two") == 0, "ro_list.get (1) == \"two\"");
	_g_free0 (_tmp16_);
	_tmp17_ = ro_list;
	_tmp18_ = gee_bidir_list_bidir_list_iterator (_tmp17_);
	iterator = _tmp18_;
	_tmp19_ = iterator;
	_tmp20_ = gee_iterator_has_next ((GeeIterator*) _tmp19_);
	_vala_assert (_tmp20_, "iterator.has_next ()");
	_tmp21_ = iterator;
	_tmp22_ = gee_iterator_next ((GeeIterator*) _tmp21_);
	_vala_assert (_tmp22_, "iterator.next ()");
	_tmp23_ = iterator;
	_tmp24_ = gee_iterator_get ((GeeIterator*) _tmp23_);
	_tmp25_ = (gchar*) _tmp24_;
	_vala_assert (g_strcmp0 (_tmp25_, "one") == 0, "iterator.get () == \"one\"");
	_g_free0 (_tmp25_);
	_tmp26_ = iterator;
	_tmp27_ = gee_list_iterator_index ((GeeListIterator*) _tmp26_);
	_vala_assert (_tmp27_ == 0, "iterator.index () == 0");
	_tmp28_ = iterator;
	_tmp29_ = gee_iterator_has_next ((GeeIterator*) _tmp28_);
	_vala_assert (_tmp29_, "iterator.has_next ()");
	_tmp30_ = iterator;
	_tmp31_ = gee_iterator_next ((GeeIterator*) _tmp30_);
	_vala_assert (_tmp31_, "iterator.next ()");
	_tmp32_ = iterator;
	_tmp33_ = gee_iterator_get ((GeeIterator*) _tmp32_);
	_tmp34_ = (gchar*) _tmp33_;
	_vala_assert (g_strcmp0 (_tmp34_, "two") == 0, "iterator.get () == \"two\"");
	_g_free0 (_tmp34_);
	_tmp35_ = iterator;
	_tmp36_ = gee_list_iterator_index ((GeeListIterator*) _tmp35_);
	_vala_assert (_tmp36_ == 1, "iterator.index () == 1");
	_tmp37_ = iterator;
	_tmp38_ = gee_iterator_has_next ((GeeIterator*) _tmp37_);
	_vala_assert (!_tmp38_, "! iterator.has_next ()");
	_tmp39_ = iterator;
	_tmp40_ = gee_iterator_next ((GeeIterator*) _tmp39_);
	_vala_assert (!_tmp40_, "! iterator.next ()");
	_tmp41_ = iterator;
	_tmp42_ = gee_bidir_iterator_has_previous ((GeeBidirIterator*) _tmp41_);
	_vala_assert (_tmp42_, "iterator.has_previous ()");
	_tmp43_ = iterator;
	_tmp44_ = gee_bidir_iterator_previous ((GeeBidirIterator*) _tmp43_);
	_vala_assert (_tmp44_, "iterator.previous ()");
	_tmp45_ = iterator;
	_tmp46_ = gee_iterator_get ((GeeIterator*) _tmp45_);
	_tmp47_ = (gchar*) _tmp46_;
	_vala_assert (g_strcmp0 (_tmp47_, "one") == 0, "iterator.get () == \"one\"");
	_g_free0 (_tmp47_);
	_tmp48_ = iterator;
	_tmp49_ = gee_list_iterator_index ((GeeListIterator*) _tmp48_);
	_vala_assert (_tmp49_ == 0, "iterator.index () == 0");
	_tmp50_ = iterator;
	_tmp51_ = gee_bidir_iterator_last ((GeeBidirIterator*) _tmp50_);
	_vala_assert (_tmp51_, "iterator.last ()");
	_tmp52_ = iterator;
	_tmp53_ = gee_iterator_get ((GeeIterator*) _tmp52_);
	_tmp54_ = (gchar*) _tmp53_;
	_vala_assert (g_strcmp0 (_tmp54_, "two") == 0, "iterator.get () == \"two\"");
	_g_free0 (_tmp54_);
	_tmp55_ = iterator;
	_tmp56_ = gee_list_iterator_index ((GeeListIterator*) _tmp55_);
	_vala_assert (_tmp56_ == 1, "iterator.index () == 1");
	_tmp57_ = iterator;
	_tmp58_ = gee_bidir_iterator_first ((GeeBidirIterator*) _tmp57_);
	_vala_assert (_tmp58_, "iterator.first ()");
	_tmp59_ = iterator;
	_tmp60_ = gee_iterator_get ((GeeIterator*) _tmp59_);
	_tmp61_ = (gchar*) _tmp60_;
	_vala_assert (g_strcmp0 (_tmp61_, "one") == 0, "iterator.get () == \"one\"");
	_g_free0 (_tmp61_);
	_tmp62_ = iterator;
	_tmp63_ = gee_list_iterator_index ((GeeListIterator*) _tmp62_);
	_vala_assert (_tmp63_ == 0, "iterator.index () == 0");
	_tmp64_ = g_test_trap_fork ((guint64) 0, G_TEST_TRAP_SILENCE_STDOUT | G_TEST_TRAP_SILENCE_STDERR);
	if (_tmp64_) {
		GeeBidirListIterator* _tmp65_;
		_tmp65_ = iterator;
		gee_iterator_remove ((GeeIterator*) _tmp65_);
		exit (0);
	}
	g_test_trap_assert_failed ();
	_tmp66_ = ro_list;
	_tmp67_ = gee_collection_get_size ((GeeCollection*) _tmp66_);
	_tmp68_ = _tmp67_;
	_vala_assert (_tmp68_ == 2, "ro_list.size == 2");
	_tmp69_ = ro_list;
	_tmp70_ = gee_list_get ((GeeList*) _tmp69_, 0);
	_tmp71_ = (gchar*) _tmp70_;
	_vala_assert (g_strcmp0 (_tmp71_, "one") == 0, "ro_list.get (0) == \"one\"");
	_g_free0 (_tmp71_);
	_tmp72_ = ro_list;
	_tmp73_ = gee_list_get ((GeeList*) _tmp72_, 1);
	_tmp74_ = (gchar*) _tmp73_;
	_vala_assert (g_strcmp0 (_tmp74_, "two") == 0, "ro_list.get (1) == \"two\"");
	_g_free0 (_tmp74_);
	_tmp75_ = iterator;
	_tmp76_ = gee_list_iterator_index ((GeeListIterator*) _tmp75_);
	_vala_assert (_tmp76_ == 0, "iterator.index () == 0");
	_tmp77_ = g_test_trap_fork ((guint64) 0, G_TEST_TRAP_SILENCE_STDOUT | G_TEST_TRAP_SILENCE_STDERR);
	if (_tmp77_) {
		GeeBidirListIterator* _tmp78_;
		_tmp78_ = iterator;
		g_object_set ((GObject*) _tmp78_, "three", NULL);
		exit (0);
	}
	g_test_trap_assert_failed ();
	_tmp79_ = ro_list;
	_tmp80_ = gee_collection_get_size ((GeeCollection*) _tmp79_);
	_tmp81_ = _tmp80_;
	_vala_assert (_tmp81_ == 2, "ro_list.size == 2");
	_tmp82_ = ro_list;
	_tmp83_ = gee_list_get ((GeeList*) _tmp82_, 0);
	_tmp84_ = (gchar*) _tmp83_;
	_vala_assert (g_strcmp0 (_tmp84_, "one") == 0, "ro_list.get (0) == \"one\"");
	_g_free0 (_tmp84_);
	_tmp85_ = ro_list;
	_tmp86_ = gee_list_get ((GeeList*) _tmp85_, 1);
	_tmp87_ = (gchar*) _tmp86_;
	_vala_assert (g_strcmp0 (_tmp87_, "two") == 0, "ro_list.get (1) == \"two\"");
	_g_free0 (_tmp87_);
	_tmp88_ = iterator;
	_tmp89_ = gee_list_iterator_index ((GeeListIterator*) _tmp88_);
	_vala_assert (_tmp89_ == 0, "iterator.index () == 0");
	_tmp90_ = g_test_trap_fork ((guint64) 0, G_TEST_TRAP_SILENCE_STDOUT | G_TEST_TRAP_SILENCE_STDERR);
	if (_tmp90_) {
		GeeBidirListIterator* _tmp91_;
		_tmp91_ = iterator;
		gee_bidir_list_iterator_insert (_tmp91_, "three");
		exit (0);
	}
	g_test_trap_assert_failed ();
	_tmp92_ = ro_list;
	_tmp93_ = gee_collection_get_size ((GeeCollection*) _tmp92_);
	_tmp94_ = _tmp93_;
	_vala_assert (_tmp94_ == 2, "ro_list.size == 2");
	_tmp95_ = ro_list;
	_tmp96_ = gee_list_get ((GeeList*) _tmp95_, 0);
	_tmp97_ = (gchar*) _tmp96_;
	_vala_assert (g_strcmp0 (_tmp97_, "one") == 0, "ro_list.get (0) == \"one\"");
	_g_free0 (_tmp97_);
	_tmp98_ = ro_list;
	_tmp99_ = gee_list_get ((GeeList*) _tmp98_, 1);
	_tmp100_ = (gchar*) _tmp99_;
	_vala_assert (g_strcmp0 (_tmp100_, "two") == 0, "ro_list.get (1) == \"two\"");
	_g_free0 (_tmp100_);
	_tmp101_ = iterator;
	_tmp102_ = gee_list_iterator_index ((GeeListIterator*) _tmp101_);
	_vala_assert (_tmp102_ == 0, "iterator.index () == 0");
	_tmp103_ = g_test_trap_fork ((guint64) 0, G_TEST_TRAP_SILENCE_STDOUT | G_TEST_TRAP_SILENCE_STDERR);
	if (_tmp103_) {
		GeeBidirListIterator* _tmp104_;
		_tmp104_ = iterator;
		gee_list_iterator_add ((GeeListIterator*) _tmp104_, "three");
		exit (0);
	}
	g_test_trap_assert_failed ();
	_tmp105_ = ro_list;
	_tmp106_ = gee_collection_get_size ((GeeCollection*) _tmp105_);
	_tmp107_ = _tmp106_;
	_vala_assert (_tmp107_ == 2, "ro_list.size == 2");
	_tmp108_ = ro_list;
	_tmp109_ = gee_list_get ((GeeList*) _tmp108_, 0);
	_tmp110_ = (gchar*) _tmp109_;
	_vala_assert (g_strcmp0 (_tmp110_, "one") == 0, "ro_list.get (0) == \"one\"");
	_g_free0 (_tmp110_);
	_tmp111_ = ro_list;
	_tmp112_ = gee_list_get ((GeeList*) _tmp111_, 1);
	_tmp113_ = (gchar*) _tmp112_;
	_vala_assert (g_strcmp0 (_tmp113_, "two") == 0, "ro_list.get (1) == \"two\"");
	_g_free0 (_tmp113_);
	_tmp114_ = iterator;
	_tmp115_ = gee_list_iterator_index ((GeeListIterator*) _tmp114_);
	_vala_assert (_tmp115_ == 0, "iterator.index () == 0");
	_g_object_unref0 (iterator);
	_g_object_unref0 (ro_list);
	_g_object_unref0 (test_list);
}


static void read_only_bidir_list_tests_class_init (ReadOnlyBidirListTestsClass * klass) {
	read_only_bidir_list_tests_parent_class = g_type_class_peek_parent (klass);
	READ_ONLY_COLLECTION_TESTS_CLASS (klass)->get_ro_view = read_only_bidir_list_tests_real_get_ro_view;
}


static void read_only_bidir_list_tests_instance_init (ReadOnlyBidirListTests * self) {
}


GType read_only_bidir_list_tests_get_type (void) {
	static volatile gsize read_only_bidir_list_tests_type_id__volatile = 0;
	if (g_once_init_enter (&read_only_bidir_list_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ReadOnlyBidirListTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) read_only_bidir_list_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ReadOnlyBidirListTests), 0, (GInstanceInitFunc) read_only_bidir_list_tests_instance_init, NULL };
		GType read_only_bidir_list_tests_type_id;
		read_only_bidir_list_tests_type_id = g_type_register_static (TYPE_READ_ONLY_LIST_TESTS, "ReadOnlyBidirListTests", &g_define_type_info, 0);
		g_once_init_leave (&read_only_bidir_list_tests_type_id__volatile, read_only_bidir_list_tests_type_id);
	}
	return read_only_bidir_list_tests_type_id__volatile;
}



