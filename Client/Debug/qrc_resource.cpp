/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.7.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/zyoohv/Documents/Lilink/Client/Lilink_Client/AboutProject-dev
  0x0,0x0,0x0,0xaa,
  0x23,
  0x20,0x50,0x72,0x69,0x6e,0x63,0x69,0x70,0x6c,0x65,0x20,0x6f,0x66,0x20,0x75,0x73,
  0x69,0x6e,0x67,0x20,0x43,0x2b,0x2b,0xa,0xa,0x23,0x20,0x31,0x2e,0x20,0x61,0x62,
  0x6f,0x75,0x74,0x20,0x68,0x6f,0x77,0x20,0x74,0x6f,0x20,0x73,0x65,0x74,0x20,0x6e,
  0x61,0x6d,0x65,0xa,0x23,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x3a,
  0x20,0x74,0x68,0x65,0x4e,0x75,0x6d,0x6f,0x66,0x50,0x65,0x6f,0x70,0x6c,0x65,0xa,
  0x23,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0x20,0x47,0x65,0x74,
  0x4e,0x61,0x6d,0x65,0xa,0x23,0x20,0x43,0x6c,0x61,0x73,0x73,0x3a,0x20,0x20,0x20,
  0x20,0x20,0x4d,0x61,0x69,0x6e,0x57,0x69,0x6e,0x64,0x6f,0x77,0xa,0xa,0xa,0x23,
  0x20,0x32,0x2e,0x20,0x61,0x62,0x6f,0x75,0x74,0x20,0x63,0x6c,0x61,0x73,0x73,0x20,
  0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x20,0x61,0x6e,0x64,0x20,0x66,0x75,
  0x6e,0x63,0x74,0x69,0x6f,0x6e,0xa,0x23,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // AboutProject-dev
  0x0,0x10,
  0x2,0x99,0xeb,0x66,
  0x0,0x41,
  0x0,0x62,0x0,0x6f,0x0,0x75,0x0,0x74,0x0,0x50,0x0,0x72,0x0,0x6f,0x0,0x6a,0x0,0x65,0x0,0x63,0x0,0x74,0x0,0x2d,0x0,0x64,0x0,0x65,0x0,0x76,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/AboutProject-dev
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)(); }
   } dummy;
}
