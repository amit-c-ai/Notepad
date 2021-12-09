#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,1,0,0,0,1,0,0,0,
8,0,2,0,0,0,1,0,0,0,2,0,0,0,44,0,
2,0,0,0,1,0,0,0,3,0,0,0,58,0,2,0,
0,0,1,0,0,0,4,0,0,0,78,0,2,0,0,0,
2,0,0,0,5,0,0,0,88,0,0,0,0,0,1,0,
0,0,0,0,0,0,126,0,0,0,0,0,1,0,0,0,
0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,15,3,137,234,100,0,81,0,
68,0,97,0,114,0,107,0,83,0,116,0,121,0,108,0,
101,0,83,0,104,0,101,0,101,0,116,0,4,0,6,181,
163,0,100,0,111,0,99,0,115,0,7,6,170,138,51,0,
95,0,115,0,116,0,97,0,116,0,105,0,99,0,2,0,
0,7,19,0,106,0,115,0,16,12,11,33,19,0,109,0,
111,0,100,0,101,0,114,0,110,0,105,0,122,0,114,0,
46,0,109,0,105,0,110,0,46,0,106,0,115,0,8,14,
195,138,83,0,116,0,104,0,101,0,109,0,101,0,46,0,
106,0,115};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _0x5f_QDarkStyleSheet_docs__static_js_theme_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f_QDarkStyleSheet_docs__static_js_modernizr_min_0x2e_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/QDarkStyleSheet/docs/_static/js/theme.js"), &QmlCacheGeneratedCode::_0x5f_QDarkStyleSheet_docs__static_js_theme_js::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/QDarkStyleSheet/docs/_static/js/modernizr.min.js"), &QmlCacheGeneratedCode::_0x5f_QDarkStyleSheet_docs__static_js_modernizr_min_0x2e_js::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_resources)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(resources_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_resources))
int QT_MANGLE_NAMESPACE(qCleanupResources_resources)() {
    Q_CLEANUP_RESOURCE(resources_qmlcache);
    return 1;
}
