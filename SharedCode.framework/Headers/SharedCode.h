#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedCodeKotlinEnum, SharedCodeCurrencyEnum, SharedCodeKtor_client_coreHttpClient, SharedCodeIcard, SharedCodePurchasePresenter, SharedCodeRefundPresenter, SharedCodeStoreCardPresenter, SharedCodeUpdateCardPresenter, SharedCodePresenterCoroutineScope, SharedCodeBaseResponseModel, SharedCodeKotlinThrowable, SharedCodeBasePresenter, SharedCodePurchaseUseCase, SharedCodeIPGPurchaseModel, SharedCodeTransactionRefModel, SharedCodeRefundUseCase, SharedCodeIPGRefundModel, SharedCodeStoreCardUseCase, SharedCodeIPGStoreCardModel, SharedCodeStoredCardModel, SharedCodeStoredCardUpdateUseCase, SharedCodeIPGStoredCardUpdate, SharedCodeBaseRequestModel, SharedCodeKotlinx_serialization_runtimeJson, SharedCodeBaseApi, SharedCodeBaseUseCase, SharedCodePurchaseApi, SharedCodeRefundApi, SharedCodeStoreCardApi, SharedCodeBaseRequestParameters, SharedCodeCartItemModel, SharedCodeEither, SharedCodeEitherError, SharedCodeKotlinNothing, SharedCodeEitherFailure, SharedCodeEitherSuccess, SharedCodeKodein_diDIModule, SharedCodeKtor_client_coreHttpClientConfig, SharedCodeKotlinx_coroutines_coreCoroutineDispatcher, SharedCodeKtor_client_coreHttpClientEngineConfig, SharedCodeKtor_client_coreHttpReceivePipeline, SharedCodeKtor_client_coreHttpRequestPipeline, SharedCodeKtor_client_coreHttpResponsePipeline, SharedCodeKtor_client_coreHttpSendPipeline, SharedCodeKotlinArray, SharedCodeKotlinx_serialization_runtimeJsonBuilder, SharedCodeKotlinx_serialization_runtimeJsonConfiguration, SharedCodeKotlinx_serialization_runtimeJsonElement, SharedCodeKtor_utilsAttributeKey, SharedCodeKotlinAbstractCoroutineContextElement, SharedCodeKtor_client_coreProxyConfig, SharedCodeKtor_utilsPipelinePhase, SharedCodeKtor_utilsPipeline, SharedCodeKotlinx_serialization_runtimeUpdateMode, SharedCodeKotlinx_serialization_runtimeJsonNull, SharedCodeKotlinx_serialization_runtimeJsonPrimitive, SharedCodeKotlinx_serialization_runtimeSerialKind, SharedCodeKodein_typeTypeToken, SharedCodeKtor_httpUrl, SharedCodeKodein_diDIKey, SharedCodeKodein_diScopeRegistry, SharedCodeKtor_httpURLProtocol, SharedCodeKodein_diDITrigger, SharedCodeKodein_diReference, SharedCodeKotlinTriple, SharedCodeKodein_diSearchSpecs, SharedCodeKodein_diDIDefinition, SharedCodeKodein_diDIDefining;

@protocol SharedCodeKotlinComparable, SharedCodeICNativeConnector, SharedCodeKotlinCoroutineContext, SharedCodeKotlinx_coroutines_coreCoroutineScope, SharedCodePurchaseView, SharedCodeBaseView, SharedCodeRefundView, SharedCodeStoreCardView, SharedCodeUpdateCardView, SharedCodeKtor_httpParameters, SharedCodeKotlinx_serialization_runtimeKSerializer, SharedCodeAndroidParcel, SharedCodeKtor_ioCloseable, SharedCodeKtor_client_coreHttpClientEngine, SharedCodeKtor_client_coreHttpClientEngineCapability, SharedCodeKtor_utilsAttributes, SharedCodeKotlinCoroutineContextElement, SharedCodeKotlinCoroutineContextKey, SharedCodeKotlinMapEntry, SharedCodeKtor_utilsStringValues, SharedCodeKotlinx_serialization_runtimeDeserializationStrategy, SharedCodeKotlinx_serialization_runtimeSerializationStrategy, SharedCodeKotlinx_serialization_runtimeSerialModule, SharedCodeKotlinx_serialization_runtimeSerialFormat, SharedCodeKotlinx_serialization_runtimeStringFormat, SharedCodeKotlinx_serialization_runtimeEncoder, SharedCodeKotlinx_serialization_runtimeSerialDescriptor, SharedCodeKotlinx_serialization_runtimeDecoder, SharedCodeKodein_diDIBuilder, SharedCodeKtor_client_coreHttpClientFeature, SharedCodeKotlinContinuation, SharedCodeKotlinContinuationInterceptor, SharedCodeKotlinx_coroutines_coreRunnable, SharedCodeKotlinSuspendFunction2, SharedCodeKotlinIterator, SharedCodeKotlinx_serialization_runtimeSerialModuleCollector, SharedCodeKotlinKClass, SharedCodeKotlinx_serialization_runtimeCompositeEncoder, SharedCodeKotlinAnnotation, SharedCodeKotlinx_serialization_runtimeCompositeDecoder, SharedCodeKodein_diDIBuilderDirectBinder, SharedCodeKodein_diDIBuilderTypeBinder, SharedCodeKodein_diContextTranslator, SharedCodeKodein_diDIBuilderConstantBinder, SharedCodeKodein_diDirectDI, SharedCodeKodein_diDIContainerBuilder, SharedCodeKodein_diDIBindBuilder, SharedCodeKodein_diDIBindBuilderWithContext, SharedCodeKodein_diScope, SharedCodeKodein_diDIBindBuilderWithScope, SharedCodeKotlinFunction, SharedCodeKotlinKDeclarationContainer, SharedCodeKotlinKAnnotatedElement, SharedCodeKotlinKClassifier, SharedCodeKodein_diDIBinding, SharedCodeKodein_diDIContext, SharedCodeKodein_diDIContainer, SharedCodeKodein_diDI, SharedCodeKodein_diDirectDIAware, SharedCodeKodein_diDirectDIBase, SharedCodeKodein_diDIBindingCopier, SharedCodeKodein_diBindingDI, SharedCodeKodein_diBinding, SharedCodeKodein_diDITree, SharedCodeKodein_diDIAware, SharedCodeKodein_diScopeCloseable, SharedCodeKodein_diWithContext, SharedCodeKodein_diSimpleBindingDI, SharedCodeKodein_diExternalSource, SharedCodeKotlinLazy;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedCodeBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedCodeBase (SharedCodeBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedCodeMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedCodeMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedCodeKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedCodeNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedCodeByte : SharedCodeNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedCodeUByte : SharedCodeNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedCodeShort : SharedCodeNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedCodeUShort : SharedCodeNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedCodeInt : SharedCodeNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedCodeUInt : SharedCodeNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedCodeLong : SharedCodeNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedCodeULong : SharedCodeNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedCodeFloat : SharedCodeNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedCodeDouble : SharedCodeNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedCodeBoolean : SharedCodeNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedCodeKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedCodeKotlinEnum : SharedCodeBase <SharedCodeKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedCodeKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyEnum")))
@interface SharedCodeCurrencyEnum : SharedCodeKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCodeCurrencyEnum *eur __attribute__((swift_name("eur")));
@property (class, readonly) SharedCodeCurrencyEnum *usd __attribute__((swift_name("usd")));
@property (class, readonly) SharedCodeCurrencyEnum *bgn __attribute__((swift_name("bgn")));
- (int32_t)compareToOther:(SharedCodeCurrencyEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString *isoCode __attribute__((swift_name("isoCode")));
@end;

__attribute__((swift_name("ICNativeConnector")))
@protocol SharedCodeICNativeConnector
@required
- (NSString *)encryptPKCS1PaddingEncodeBase64TextForEncryption:(NSString *)textForEncryption __attribute__((swift_name("encryptPKCS1PaddingEncodeBase64(textForEncryption:)")));
- (NSString *)generateSignaturePostParams:(NSString *)postParams __attribute__((swift_name("generateSignature(postParams:)")));
- (BOOL)verifySignatureResponse:(NSString *)response __attribute__((swift_name("verifySignature(response:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGProtocol")))
@interface SharedCodeIPGProtocol : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGProtocol.Companion")))
@interface SharedCodeIPGProtocolCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *IPG_VERSION __attribute__((swift_name("IPG_VERSION")));
@property (readonly) NSString *METHOD_3DS __attribute__((swift_name("METHOD_3DS")));
@property (readonly) NSString *METHOD_GET_TRANSACTION_STATUS __attribute__((swift_name("METHOD_GET_TRANSACTION_STATUS")));
@property (readonly) NSString *METHOD_PURCHASE __attribute__((swift_name("METHOD_PURCHASE")));
@property (readonly) NSString *METHOD_PURCHASE_STORED_CARD __attribute__((swift_name("METHOD_PURCHASE_STORED_CARD")));
@property (readonly) NSString *METHOD_REFUND __attribute__((swift_name("METHOD_REFUND")));
@property (readonly) NSString *METHOD_STORE_CARD __attribute__((swift_name("METHOD_STORE_CARD")));
@property (readonly) NSString *METHOD_STORE_CARD_UPDATE __attribute__((swift_name("METHOD_STORE_CARD_UPDATE")));
@property (readonly) NSString *SDK_VERSION __attribute__((swift_name("SDK_VERSION")));
@property (readonly) NSString *TAG_BACKEND __attribute__((swift_name("TAG_BACKEND")));
@property (readonly) NSString *TAG_FROM_MOBILE __attribute__((swift_name("TAG_FROM_MOBILE")));
@property (readonly) NSString *TAG_IPG_VERSION __attribute__((swift_name("TAG_IPG_VERSION")));
@property (readonly) NSString *TAG_KEY_INDEX __attribute__((swift_name("TAG_KEY_INDEX")));
@property (readonly) NSString *TAG_LANGUAGE __attribute__((swift_name("TAG_LANGUAGE")));
@property (readonly) NSString *TAG_METHOD __attribute__((swift_name("TAG_METHOD")));
@property (readonly) NSString *TAG_MID __attribute__((swift_name("TAG_MID")));
@property (readonly) NSString *TAG_ORIGINATOR __attribute__((swift_name("TAG_ORIGINATOR")));
@property (readonly) NSString *TAG_OUTPUT_FORMAT __attribute__((swift_name("TAG_OUTPUT_FORMAT")));
@property (readonly) NSString *TAG_SDK_VERSION __attribute__((swift_name("TAG_SDK_VERSION")));
@property (readonly) NSString *TAG_SIGNATURE __attribute__((swift_name("TAG_SIGNATURE")));
@property (readonly) NSString *TAG_STATUS __attribute__((swift_name("TAG_STATUS")));
@property (readonly) NSString *TAG_STATUS_MSG __attribute__((swift_name("TAG_STATUS_MSG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformServiceLocator")))
@interface SharedCodePlatformServiceLocator : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformServiceLocator __attribute__((swift_name("init()")));
- (SharedCodeKtor_client_coreHttpClient *)getHttpClientEngine __attribute__((swift_name("getHttpClientEngine()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceLocator")))
@interface SharedCodeServiceLocator : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serviceLocator __attribute__((swift_name("init()")));
- (void)setupServiceLocator __attribute__((swift_name("setupServiceLocator()")));
@property SharedCodeIcard * _Nullable getIcardModel __attribute__((swift_name("getIcardModel")));
@property SharedCodePurchasePresenter * _Nullable getPurchasePresenter __attribute__((swift_name("getPurchasePresenter")));
@property SharedCodeRefundPresenter * _Nullable getRefundPresenter __attribute__((swift_name("getRefundPresenter")));
@property SharedCodeStoreCardPresenter * _Nullable getStoreCardPresenter __attribute__((swift_name("getStoreCardPresenter")));
@property SharedCodeUpdateCardPresenter * _Nullable getUpdateCardPresenter __attribute__((swift_name("getUpdateCardPresenter")));
@property id<SharedCodeICNativeConnector> _Nullable icNativeConnector __attribute__((swift_name("icNativeConnector")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface SharedCodeUtils : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils.Companion")))
@interface SharedCodeUtilsCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *HOST __attribute__((swift_name("HOST")));
@property (readonly) int32_t STATUS_INTERNAL_API_ERROR __attribute__((swift_name("STATUS_INTERNAL_API_ERROR")));
@property (readonly) int32_t STATUS_INTERNAL_COMMUNICATION_ERROR __attribute__((swift_name("STATUS_INTERNAL_COMMUNICATION_ERROR")));
@property (readonly) int32_t STATUS_INTERNAL_INVALID_PARAMS __attribute__((swift_name("STATUS_INTERNAL_INVALID_PARAMS")));
@property (readonly) int32_t STATUS_INTERNAL_SDK_NOT_INITIALIZED __attribute__((swift_name("STATUS_INTERNAL_SDK_NOT_INITIALIZED")));
@property (readonly) int32_t STATUS_INTERNAL_SIGNATURE_FAILED __attribute__((swift_name("STATUS_INTERNAL_SIGNATURE_FAILED")));
@property (readonly) int32_t STATUS_INTERNAL_TIMEOUT __attribute__((swift_name("STATUS_INTERNAL_TIMEOUT")));
@property (readonly) int32_t STATUS_SUCCESS __attribute__((swift_name("STATUS_SUCCESS")));
@end;

__attribute__((swift_name("BasePresenter")))
@interface SharedCodeBasePresenter : SharedCodeBase
- (instancetype)initWithCoroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer));
- (void)attachViewView:(id _Nullable)view __attribute__((swift_name("attachView(view:)")));
- (void)detachView __attribute__((swift_name("detachView()")));
- (void)onViewAttachedView:(id _Nullable)view __attribute__((swift_name("onViewAttached(view:)")));
- (void)onViewDetached __attribute__((swift_name("onViewDetached()")));
@property SharedCodePresenterCoroutineScope *scope __attribute__((swift_name("scope")));
@property id _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("BaseView")))
@protocol SharedCodeBaseView
@required
- (void)onErrorResponseModel:(SharedCodeBaseResponseModel *)responseModel __attribute__((swift_name("onError(responseModel:)")));
- (void)onExceptionThrowable:(SharedCodeKotlinThrowable *)throwable __attribute__((swift_name("onException(throwable:)")));
- (void)setProgressShow:(BOOL)show __attribute__((swift_name("setProgress(show:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedCodeKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedCodeKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresenterCoroutineScope")))
@interface SharedCodePresenterCoroutineScope : SharedCodeBase <SharedCodeKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithContext:(id<SharedCodeKotlinCoroutineContext>)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (void)viewDetached __attribute__((swift_name("viewDetached()")));
@property (readonly) id<SharedCodeKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchasePresenter")))
@interface SharedCodePurchasePresenter : SharedCodeBasePresenter
- (instancetype)initWithPurchaseUseCase:(SharedCodePurchaseUseCase *)purchaseUseCase coroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(purchaseUseCase:coroutineContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)attachViewView:(id<SharedCodePurchaseView>)view __attribute__((swift_name("attachView(view:)")));
- (void)onViewAttachedView:(id<SharedCodePurchaseView>)view __attribute__((swift_name("onViewAttached(view:)")));
- (void)purchaseIpgPurchaseModel:(SharedCodeIPGPurchaseModel *)ipgPurchaseModel __attribute__((swift_name("purchase(ipgPurchaseModel:)")));
@property id<SharedCodePurchaseView> _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("PurchaseView")))
@protocol SharedCodePurchaseView <SharedCodeBaseView>
@required
- (void)transactionReferenceTransactionRefModel:(SharedCodeTransactionRefModel *)transactionRefModel __attribute__((swift_name("transactionReference(transactionRefModel:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefundPresenter")))
@interface SharedCodeRefundPresenter : SharedCodeBasePresenter
- (instancetype)initWithRefundUseCase:(SharedCodeRefundUseCase *)refundUseCase coroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(refundUseCase:coroutineContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)attachViewView:(id<SharedCodeRefundView>)view __attribute__((swift_name("attachView(view:)")));
- (void)onViewAttachedView:(id<SharedCodeRefundView>)view __attribute__((swift_name("onViewAttached(view:)")));
- (void)refundIpgRefundModel:(SharedCodeIPGRefundModel *)ipgRefundModel __attribute__((swift_name("refund(ipgRefundModel:)")));
@property id<SharedCodeRefundView> _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("RefundView")))
@protocol SharedCodeRefundView <SharedCodeBaseView>
@required
- (void)transactionReferenceReceivedTransactionRefModel:(SharedCodeTransactionRefModel *)transactionRefModel __attribute__((swift_name("transactionReferenceReceived(transactionRefModel:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreCardPresenter")))
@interface SharedCodeStoreCardPresenter : SharedCodeBasePresenter
- (instancetype)initWithStoreCardUseCase:(SharedCodeStoreCardUseCase *)storeCardUseCase coroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(storeCardUseCase:coroutineContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)attachViewView:(id<SharedCodeStoreCardView>)view __attribute__((swift_name("attachView(view:)")));
- (void)onViewAttachedView:(id<SharedCodeStoreCardView>)view __attribute__((swift_name("onViewAttached(view:)")));
- (void)storeCardIpgStoreCardModel:(SharedCodeIPGStoreCardModel *)ipgStoreCardModel __attribute__((swift_name("storeCard(ipgStoreCardModel:)")));
@property id<SharedCodeStoreCardView> _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("StoreCardView")))
@protocol SharedCodeStoreCardView <SharedCodeBaseView>
@required
- (void)cardStoredStoredCardModel:(SharedCodeStoredCardModel *)storedCardModel __attribute__((swift_name("cardStored(storedCardModel:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateCardPresenter")))
@interface SharedCodeUpdateCardPresenter : SharedCodeBasePresenter
- (instancetype)initWithUpdateCardUseCase:(SharedCodeStoredCardUpdateUseCase *)updateCardUseCase coroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(updateCardUseCase:coroutineContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineContext:(id<SharedCodeKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)attachViewView:(id<SharedCodeUpdateCardView>)view __attribute__((swift_name("attachView(view:)")));
- (void)onViewAttachedView:(id<SharedCodeUpdateCardView>)view __attribute__((swift_name("onViewAttached(view:)")));
- (void)updateCardIpgStoredCardUpdate:(SharedCodeIPGStoredCardUpdate *)ipgStoredCardUpdate __attribute__((swift_name("updateCard(ipgStoredCardUpdate:)")));
@property id<SharedCodeUpdateCardView> _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("UpdateCardView")))
@protocol SharedCodeUpdateCardView <SharedCodeBaseView>
@required
- (void)cardUpdatedStoredCardModel:(SharedCodeStoredCardModel *)storedCardModel __attribute__((swift_name("cardUpdated(storedCardModel:)")));
@end;

__attribute__((swift_name("AndroidParcel")))
@protocol SharedCodeAndroidParcel
@required
@end;

__attribute__((swift_name("BaseApi")))
@interface SharedCodeBaseApi : SharedCodeBase
- (instancetype)initWithClient:(SharedCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCodeKtor_httpParameters>)createFormParametersRequestModel:(SharedCodeBaseRequestModel *)requestModel __attribute__((swift_name("createFormParameters(requestModel:)")));
- (SharedCodeBaseResponseModel *)processResponseBody:(NSString *)body __attribute__((swift_name("processResponse(body:)")));
@property (readonly) id<SharedCodeICNativeConnector> _Nullable iCNativeConnector __attribute__((swift_name("iCNativeConnector")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeJson *json __attribute__((swift_name("json")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchaseApi")))
@interface SharedCodePurchaseApi : SharedCodeBaseApi
- (instancetype)initWithClient:(SharedCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCodeKtor_httpParameters>)createFormParametersRequestModel:(SharedCodeIPGPurchaseModel *)requestModel __attribute__((swift_name("createFormParameters(requestModel:)")));
- (SharedCodeTransactionRefModel *)processResponseBody:(NSString *)body __attribute__((swift_name("processResponse(body:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefundApi")))
@interface SharedCodeRefundApi : SharedCodeBaseApi
- (instancetype)initWithClient:(SharedCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCodeKtor_httpParameters>)createFormParametersRequestModel:(SharedCodeIPGRefundModel *)requestModel __attribute__((swift_name("createFormParameters(requestModel:)")));
- (SharedCodeTransactionRefModel *)processResponseBody:(NSString *)body __attribute__((swift_name("processResponse(body:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreCardApi")))
@interface SharedCodeStoreCardApi : SharedCodeBaseApi
- (instancetype)initWithClient:(SharedCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCodeKtor_httpParameters>)createFormParametersRequestModel:(SharedCodeIPGStoreCardModel *)requestModel __attribute__((swift_name("createFormParameters(requestModel:)")));
- (SharedCodeStoredCardModel *)processResponseBody:(NSString *)body __attribute__((swift_name("processResponse(body:)")));
@end;

__attribute__((swift_name("BaseUseCase")))
@interface SharedCodeBaseUseCase : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseUseCase.None")))
@interface SharedCodeBaseUseCaseNone : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchaseUseCase")))
@interface SharedCodePurchaseUseCase : SharedCodeBaseUseCase
- (instancetype)initWithPurchaseApi:(SharedCodePurchaseApi *)purchaseApi __attribute__((swift_name("init(purchaseApi:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefundUseCase")))
@interface SharedCodeRefundUseCase : SharedCodeBaseUseCase
- (instancetype)initWithRefundApi:(SharedCodeRefundApi *)refundApi __attribute__((swift_name("init(refundApi:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreCardUseCase")))
@interface SharedCodeStoreCardUseCase : SharedCodeBaseUseCase
- (instancetype)initWithStoreCardApi:(SharedCodeStoreCardApi *)storeCardApi __attribute__((swift_name("init(storeCardApi:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoredCardUpdateUseCase")))
@interface SharedCodeStoredCardUpdateUseCase : SharedCodeBaseUseCase
- (instancetype)initWithStoreCardApi:(SharedCodeStoreCardApi *)storeCardApi __attribute__((swift_name("init(storeCardApi:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((swift_name("BaseRequestModel")))
@interface SharedCodeBaseRequestModel : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *method __attribute__((swift_name("method")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseRequestParameters")))
@interface SharedCodeBaseRequestParameters : SharedCodeBase
- (instancetype)initWithIpgVersion:(NSString *)ipgVersion sdkVersion:(NSString * _Nullable)sdkVersion fromMobile:(NSString *)fromMobile outputFormat:(NSString *)outputFormat backEnd:(NSString *)backEnd __attribute__((swift_name("init(ipgVersion:sdkVersion:fromMobile:outputFormat:backEnd:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (SharedCodeBaseRequestParameters *)doCopyIpgVersion:(NSString *)ipgVersion sdkVersion:(NSString * _Nullable)sdkVersion fromMobile:(NSString *)fromMobile outputFormat:(NSString *)outputFormat backEnd:(NSString *)backEnd __attribute__((swift_name("doCopy(ipgVersion:sdkVersion:fromMobile:outputFormat:backEnd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *backEnd __attribute__((swift_name("backEnd")));
@property (readonly) NSString *fromMobile __attribute__((swift_name("fromMobile")));
@property (readonly) NSString *ipgVersion __attribute__((swift_name("ipgVersion")));
@property (readonly) NSString *outputFormat __attribute__((swift_name("outputFormat")));
@property (readonly) NSString * _Nullable sdkVersion __attribute__((swift_name("sdkVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseRequestParameters.Companion")))
@interface SharedCodeBaseRequestParametersCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("BaseResponseModel")))
@interface SharedCodeBaseResponseModel : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *signature __attribute__((swift_name("signature")));
@property int32_t status __attribute__((swift_name("status")));
@property NSString *statusMessage __attribute__((swift_name("statusMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItemModel")))
@interface SharedCodeCartItemModel : SharedCodeBase <SharedCodeAndroidParcel>
- (instancetype)initWithArticle:(NSString * _Nullable)article quantity:(SharedCodeInt * _Nullable)quantity price:(SharedCodeDouble * _Nullable)price amount:(SharedCodeDouble * _Nullable)amount currency:(NSString *)currency __attribute__((swift_name("init(article:quantity:price:amount:currency:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCodeInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedCodeDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedCodeDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (SharedCodeCartItemModel *)doCopyArticle:(NSString * _Nullable)article quantity:(SharedCodeInt * _Nullable)quantity price:(SharedCodeDouble * _Nullable)price amount:(SharedCodeDouble * _Nullable)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(article:quantity:price:amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedCodeDouble * _Nullable amount __attribute__((swift_name("amount")));
@property NSString * _Nullable article __attribute__((swift_name("article")));
@property NSString *currency __attribute__((swift_name("currency")));
@property SharedCodeDouble * _Nullable price __attribute__((swift_name("price")));
@property SharedCodeInt * _Nullable quantity __attribute__((swift_name("quantity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartItemModel.Companion")))
@interface SharedCodeCartItemModelCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Either")))
@interface SharedCodeEither : SharedCodeBase
- (id _Nullable)foldFailed:(id _Nullable (^)(id _Nullable))failed succeeded:(id _Nullable (^)(id _Nullable))succeeded errorr:(id _Nullable (^)(id _Nullable))errorr __attribute__((swift_name("fold(failed:succeeded:errorr:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Either.Error")))
@interface SharedCodeEitherError : SharedCodeEither
- (instancetype)initWithError:(id _Nullable)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCodeEitherError *)doCopyError:(id _Nullable)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)foldFailed:(id _Nullable (^)(SharedCodeKotlinNothing *))failed succeeded:(id _Nullable (^)(SharedCodeKotlinNothing *))succeeded errorr:(id _Nullable (^)(id _Nullable))errorr __attribute__((swift_name("fold(failed:succeeded:errorr:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Either.Failure")))
@interface SharedCodeEitherFailure : SharedCodeEither
- (instancetype)initWithFailure:(id _Nullable)failure __attribute__((swift_name("init(failure:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCodeEitherFailure *)doCopyFailure:(id _Nullable)failure __attribute__((swift_name("doCopy(failure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)foldFailed:(id _Nullable (^)(id _Nullable))failed succeeded:(id _Nullable (^)(SharedCodeKotlinNothing *))succeeded errorr:(id _Nullable (^)(SharedCodeKotlinNothing *))errorr __attribute__((swift_name("fold(failed:succeeded:errorr:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable failure __attribute__((swift_name("failure")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Either.Success")))
@interface SharedCodeEitherSuccess : SharedCodeEither
- (instancetype)initWithSuccess:(id _Nullable)success __attribute__((swift_name("init(success:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCodeEitherSuccess *)doCopySuccess:(id _Nullable)success __attribute__((swift_name("doCopy(success:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)foldFailed:(id _Nullable (^)(SharedCodeKotlinNothing *))failed succeeded:(id _Nullable (^)(id _Nullable))succeeded errorr:(id _Nullable (^)(SharedCodeKotlinNothing *))errorr __attribute__((swift_name("fold(failed:succeeded:errorr:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable success __attribute__((swift_name("success")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGPurchaseModel")))
@interface SharedCodeIPGPurchaseModel : SharedCodeBaseRequestModel
- (instancetype)initWithCardItems:(NSArray<SharedCodeCartItemModel *> *)cardItems totalAmount:(double)totalAmount orderId:(int64_t)orderId expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear eci:(NSString *)eci avv:(NSString *)avv xid:(NSString *)xid method:(NSString *)method __attribute__((swift_name("init(cardItems:totalAmount:orderId:expiryMonth:expiryYear:eci:avv:xid:method:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<SharedCodeCartItemModel *> *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (SharedCodeIPGPurchaseModel *)doCopyCardItems:(NSArray<SharedCodeCartItemModel *> *)cardItems totalAmount:(double)totalAmount orderId:(int64_t)orderId expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear eci:(NSString *)eci avv:(NSString *)avv xid:(NSString *)xid method:(NSString *)method __attribute__((swift_name("doCopy(cardItems:totalAmount:orderId:expiryMonth:expiryYear:eci:avv:xid:method:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *avv __attribute__((swift_name("avv")));
@property NSArray<SharedCodeCartItemModel *> *cardItems __attribute__((swift_name("cardItems")));
@property NSString * _Nullable cardToken __attribute__((swift_name("cardToken")));
@property NSString *currency __attribute__((swift_name("currency")));
@property NSString *cvc __attribute__((swift_name("cvc")));
@property NSString *eci __attribute__((swift_name("eci")));
@property NSString *expiryMonth __attribute__((swift_name("expiryMonth")));
@property NSString *expiryYear __attribute__((swift_name("expiryYear")));
@property NSString *method __attribute__((swift_name("method")));
@property int64_t orderId __attribute__((swift_name("orderId")));
@property NSString * _Nullable pan __attribute__((swift_name("pan")));
@property double totalAmount __attribute__((swift_name("totalAmount")));
@property NSString *xid __attribute__((swift_name("xid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGPurchaseModel.Companion")))
@interface SharedCodeIPGPurchaseModelCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGRefundModel")))
@interface SharedCodeIPGRefundModel : SharedCodeBaseRequestModel
- (instancetype)initWithTransactionRef:(NSString * _Nullable)transactionRef amount:(NSString * _Nullable)amount currency:(NSString * _Nullable)currency orderId:(NSString * _Nullable)orderId method:(NSString *)method __attribute__((swift_name("init(transactionRef:amount:currency:orderId:method:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (SharedCodeIPGRefundModel *)doCopyTransactionRef:(NSString * _Nullable)transactionRef amount:(NSString * _Nullable)amount currency:(NSString * _Nullable)currency orderId:(NSString * _Nullable)orderId method:(NSString *)method __attribute__((swift_name("doCopy(transactionRef:amount:currency:orderId:method:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable amount __attribute__((swift_name("amount")));
@property NSString * _Nullable currency __attribute__((swift_name("currency")));
@property NSString *method __attribute__((swift_name("method")));
@property NSString * _Nullable orderId __attribute__((swift_name("orderId")));
@property NSString * _Nullable transactionRef __attribute__((swift_name("transactionRef")));
@end;

__attribute__((swift_name("IPGStoreCardModel")))
@interface SharedCodeIPGStoreCardModel : SharedCodeBaseRequestModel
- (instancetype)initWithCardholderName:(NSString * _Nullable)cardholderName customName:(NSString * _Nullable)customName expiryMonth:(NSString * _Nullable)expiryMonth expiryYear:(NSString * _Nullable)expiryYear eci:(NSString * _Nullable)eci avv:(NSString * _Nullable)avv xid:(NSString * _Nullable)xid cardVerification:(NSString * _Nullable)cardVerification orderId:(int64_t)orderId amount:(NSString * _Nullable)amount method:(NSString *)method __attribute__((swift_name("init(cardholderName:customName:expiryMonth:expiryYear:eci:avv:xid:cardVerification:orderId:amount:method:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property NSString * _Nullable amount __attribute__((swift_name("amount")));
@property NSString * _Nullable avv __attribute__((swift_name("avv")));
@property NSString * _Nullable cardVerification __attribute__((swift_name("cardVerification")));
@property NSString * _Nullable cardholderName __attribute__((swift_name("cardholderName")));
@property NSString *currency __attribute__((swift_name("currency")));
@property NSString * _Nullable customName __attribute__((swift_name("customName")));
@property NSString *cvc __attribute__((swift_name("cvc")));
@property NSString * _Nullable eci __attribute__((swift_name("eci")));
@property NSString * _Nullable expiryMonth __attribute__((swift_name("expiryMonth")));
@property NSString * _Nullable expiryYear __attribute__((swift_name("expiryYear")));
@property NSString *method __attribute__((swift_name("method")));
@property (readonly) int64_t orderId __attribute__((swift_name("orderId")));
@property NSString *pan __attribute__((swift_name("pan")));
@property NSString * _Nullable xid __attribute__((swift_name("xid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGStoreCardModel.Companion")))
@interface SharedCodeIPGStoreCardModelCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPGStoredCardUpdate")))
@interface SharedCodeIPGStoredCardUpdate : SharedCodeIPGStoreCardModel
- (instancetype)initWithNote:(NSString * _Nullable)note token:(NSString * _Nullable)token expDate:(NSString * _Nullable)expDate method:(NSString *)method __attribute__((swift_name("init(note:token:expDate:method:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCardholderName:(NSString * _Nullable)cardholderName customName:(NSString * _Nullable)customName expiryMonth:(NSString * _Nullable)expiryMonth expiryYear:(NSString * _Nullable)expiryYear eci:(NSString * _Nullable)eci avv:(NSString * _Nullable)avv xid:(NSString * _Nullable)xid cardVerification:(NSString * _Nullable)cardVerification orderId:(int64_t)orderId amount:(NSString * _Nullable)amount method:(NSString *)method __attribute__((swift_name("init(cardholderName:customName:expiryMonth:expiryYear:eci:avv:xid:cardVerification:orderId:amount:method:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedCodeIPGStoredCardUpdate *)doCopyNote:(NSString * _Nullable)note token:(NSString * _Nullable)token expDate:(NSString * _Nullable)expDate method:(NSString *)method __attribute__((swift_name("doCopy(note:token:expDate:method:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable expDate __attribute__((swift_name("expDate")));
@property NSString *method __attribute__((swift_name("method")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Icard")))
@interface SharedCodeIcard : SharedCodeBase
- (instancetype)initWithMid:(NSString * _Nullable)mid currency:(NSString * _Nullable)currency clientPrivateKey:(NSString * _Nullable)clientPrivateKey iCardPublicKey:(NSString * _Nullable)iCardPublicKey originator:(NSString * _Nullable)originator language:(NSString *)language keyIndex:(NSString *)keyIndex __attribute__((swift_name("init(mid:currency:clientPrivateKey:iCardPublicKey:originator:language:keyIndex:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (SharedCodeIcard *)doCopyMid:(NSString * _Nullable)mid currency:(NSString * _Nullable)currency clientPrivateKey:(NSString * _Nullable)clientPrivateKey iCardPublicKey:(NSString * _Nullable)iCardPublicKey originator:(NSString * _Nullable)originator language:(NSString *)language keyIndex:(NSString *)keyIndex __attribute__((swift_name("doCopy(mid:currency:clientPrivateKey:iCardPublicKey:originator:language:keyIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable clientPrivateKey __attribute__((swift_name("clientPrivateKey")));
@property NSString * _Nullable currency __attribute__((swift_name("currency")));
@property NSString * _Nullable iCardPublicKey __attribute__((swift_name("iCardPublicKey")));
@property NSString *keyIndex __attribute__((swift_name("keyIndex")));
@property NSString *language __attribute__((swift_name("language")));
@property NSString * _Nullable mid __attribute__((swift_name("mid")));
@property NSString * _Nullable originator __attribute__((swift_name("originator")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Icard.Companion")))
@interface SharedCodeIcardCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoredCardModel")))
@interface SharedCodeStoredCardModel : SharedCodeBaseResponseModel <SharedCodeAndroidParcel>
- (instancetype)initWithStatus:(int32_t)status statusMessage:(NSString *)statusMessage signature:(NSString *)signature __attribute__((swift_name("init(status:statusMessage:signature:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property NSString * _Nullable cardCustomName __attribute__((swift_name("cardCustomName")));
@property NSString * _Nullable cardExpDate __attribute__((swift_name("cardExpDate")));
@property NSString * _Nullable cardPanLastDigits __attribute__((swift_name("cardPanLastDigits")));
@property NSString * _Nullable cardToken __attribute__((swift_name("cardToken")));
@property NSString * _Nullable cardType __attribute__((swift_name("cardType")));
@property NSString *signature __attribute__((swift_name("signature")));
@property int32_t status __attribute__((swift_name("status")));
@property NSString *statusMessage __attribute__((swift_name("statusMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoredCardModel.Companion")))
@interface SharedCodeStoredCardModelCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionRefModel")))
@interface SharedCodeTransactionRefModel : SharedCodeBaseResponseModel
- (instancetype)initWithStatus:(int32_t)status statusMessage:(NSString *)statusMessage signature:(NSString *)signature __attribute__((swift_name("init(status:statusMessage:signature:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property double amount __attribute__((swift_name("amount")));
@property NSString *currency __attribute__((swift_name("currency")));
@property NSString *method __attribute__((swift_name("method")));
@property NSString *signature __attribute__((swift_name("signature")));
@property int32_t status __attribute__((swift_name("status")));
@property NSString *statusMessage __attribute__((swift_name("statusMessage")));
@property NSString *transactionReference __attribute__((swift_name("transactionReference")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionRefModel.Companion")))
@interface SharedCodeTransactionRefModelCompanion : SharedCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleDIKt")))
@interface SharedCodeModuleDIKt : SharedCodeBase
+ (SharedCodeKodein_diDIModule *)sharedModule __attribute__((swift_name("sharedModule()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseExtKt")))
@interface SharedCodeBaseExtKt : SharedCodeBase
+ (NSString *)asFormData:(id)receiver ICNativeConnector:(id<SharedCodeICNativeConnector>)ICNativeConnector __attribute__((swift_name("asFormData(_:ICNativeConnector:)")));
+ (id<SharedCodeKtor_httpParameters>)asParameters:(id)receiver ICNativeConnector:(id<SharedCodeICNativeConnector> _Nullable)ICNativeConnector __attribute__((swift_name("asParameters(_:ICNativeConnector:)")));
+ (NSString *)encodeUrlUtf8:(NSString *)receiver __attribute__((swift_name("encodeUrlUtf8(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDispatcherKt")))
@interface SharedCodeAppDispatcherKt : SharedCodeBase
@property (class, readonly) id<SharedCodeKotlinCoroutineContext> backgroundDispatcher __attribute__((swift_name("backgroundDispatcher")));
@property (class, readonly) id<SharedCodeKotlinCoroutineContext> uiDispatcher __attribute__((swift_name("uiDispatcher")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SharedCodeKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SharedCodeKtor_client_coreHttpClient : SharedCodeBase <SharedCodeKotlinx_coroutines_coreCoroutineScope, SharedCodeKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SharedCodeKtor_client_coreHttpClientEngine>)engine userConfig:(SharedCodeKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SharedCodeKtor_client_coreHttpClient *)configBlock:(void (^)(SharedCodeKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SharedCodeKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SharedCodeKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) SharedCodeKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<SharedCodeKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SharedCodeKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SharedCodeKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SharedCodeKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SharedCodeKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SharedCodeKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedCodeKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedCodeKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedCodeKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedCodeKotlinCoroutineContext>)minusKeyKey:(id<SharedCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedCodeKotlinCoroutineContext>)plusContext:(id<SharedCodeKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedCodeKotlinThrowable : SharedCodeBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedCodeKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCodeKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedCodeKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedCodeKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedCodeKtor_httpParameters <SharedCodeKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialFormat")))
@protocol SharedCodeKotlinx_serialization_runtimeSerialFormat
@required
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeStringFormat")))
@protocol SharedCodeKotlinx_serialization_runtimeStringFormat <SharedCodeKotlinx_serialization_runtimeSerialFormat>
@required
- (id _Nullable)parseDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("parse(deserializer:string:)")));
- (NSString *)stringifySerializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("stringify(serializer:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJson")))
@interface SharedCodeKotlinx_serialization_runtimeJson : SharedCodeBase <SharedCodeKotlinx_serialization_runtimeStringFormat>
- (instancetype)initWithBlock:(void (^)(SharedCodeKotlinx_serialization_runtimeJsonBuilder *))block __attribute__((swift_name("init(block:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Default constructor is deprecated, please specify the desired configuration explicitly or use Json(JsonConfiguration.Default)")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithConfiguration:(SharedCodeKotlinx_serialization_runtimeJsonConfiguration *)configuration context:(id<SharedCodeKotlinx_serialization_runtimeSerialModule>)context __attribute__((swift_name("init(configuration:context:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)fromJsonDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer json:(SharedCodeKotlinx_serialization_runtimeJsonElement *)json __attribute__((swift_name("fromJson(deserializer:json:)")));
- (id)fromJsonTree:(SharedCodeKotlinx_serialization_runtimeJsonElement *)tree __attribute__((swift_name("fromJson(tree:)")));
- (id _Nullable)parseDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("parse(deserializer:string:)")));
- (SharedCodeKotlinx_serialization_runtimeJsonElement *)parseJsonString:(NSString *)string __attribute__((swift_name("parseJson(string:)")));
- (NSString *)stringifySerializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("stringify(serializer:value:)")));
- (SharedCodeKotlinx_serialization_runtimeJsonElement *)toJsonValue:(id)value __attribute__((swift_name("toJson(value:)")));
- (SharedCodeKotlinx_serialization_runtimeJsonElement *)toJsonSerializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("toJson(serializer:value:)")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol SharedCodeKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedCodeKotlinx_serialization_runtimeEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol SharedCodeKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedCodeKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedCodeKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol SharedCodeKotlinx_serialization_runtimeKSerializer <SharedCodeKotlinx_serialization_runtimeSerializationStrategy, SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedCodeKotlinNothing : SharedCodeBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface SharedCodeKodein_diDIModule : SharedCodeBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride init:(void (^)(id<SharedCodeKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:init:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("You should name your modules, for debug purposes.")));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedCodeKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (void (^)(id<SharedCodeKodein_diDIBuilder>))component4 __attribute__((swift_name("component4()")));
- (SharedCodeKodein_diDIModule *)doCopyName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedCodeKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(name:allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<SharedCodeKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SharedCodeKtor_client_coreHttpClientEngine <SharedCodeKotlinx_coroutines_coreCoroutineScope, SharedCodeKtor_ioCloseable>
@required
- (void)installClient:(SharedCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SharedCodeKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SharedCodeKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SharedCodeKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SharedCodeKtor_client_coreHttpClientConfig : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedCodeKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(SharedCodeKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SharedCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<SharedCodeKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SharedCodeKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SharedCodeKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SharedCodeKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SharedCodeKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SharedCodeKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SharedCodeKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SharedCodeKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SharedCodeKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SharedCodeKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SharedCodeKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SharedCodeKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SharedCodeKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SharedCodeKtor_utilsAttributeKey *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedCodeKotlinCoroutineContextElement <SharedCodeKotlinCoroutineContext>
@required
@property (readonly) id<SharedCodeKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedCodeKotlinAbstractCoroutineContextElement : SharedCodeBase <SharedCodeKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedCodeKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedCodeKotlinContinuationInterceptor <SharedCodeKotlinCoroutineContextElement>
@required
- (id<SharedCodeKotlinContinuation>)interceptContinuationContinuation:(id<SharedCodeKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedCodeKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedCodeKotlinx_coroutines_coreCoroutineDispatcher : SharedCodeKotlinAbstractCoroutineContextElement <SharedCodeKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<SharedCodeKotlinCoroutineContext>)context block:(id<SharedCodeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedCodeKotlinCoroutineContext>)context block:(id<SharedCodeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedCodeKotlinContinuation>)interceptContinuationContinuation:(id<SharedCodeKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedCodeKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SharedCodeKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedCodeKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedCodeKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SharedCodeKtor_client_coreHttpClientEngineConfig : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SharedCodeKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) SharedCodeKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SharedCodeKtor_utilsPipeline : SharedCodeBase
- (instancetype)initWithPhase:(SharedCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedCodeKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SharedCodeKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(SharedCodeKtor_utilsPipelinePhase *)reference phase:(SharedCodeKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SharedCodeKtor_utilsPipelinePhase *)reference phase:(SharedCodeKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SharedCodeKtor_utilsPipelinePhase *)phase block:(id<SharedCodeKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(SharedCodeKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<SharedCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SharedCodeKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SharedCodeKtor_client_coreHttpReceivePipeline : SharedCodeKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedCodeKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SharedCodeKtor_client_coreHttpRequestPipeline : SharedCodeKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedCodeKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SharedCodeKtor_client_coreHttpResponsePipeline : SharedCodeKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedCodeKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SharedCodeKtor_client_coreHttpSendPipeline : SharedCodeKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SharedCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SharedCodeKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedCodeKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedCodeKotlinArray : SharedCodeBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SharedCodeInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedCodeKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedCodeKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol SharedCodeKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<SharedCodeKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<SharedCodeKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SharedCodeKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedCodeKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SharedCodeKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonBuilder")))
@interface SharedCodeKotlinx_serialization_runtimeJsonBuilder : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedCodeKotlinx_serialization_runtimeJsonConfiguration *)buildConfiguration __attribute__((swift_name("buildConfiguration()")));
- (id<SharedCodeKotlinx_serialization_runtimeSerialModule>)buildModule __attribute__((swift_name("buildModule()")));
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property NSString *indent __attribute__((swift_name("indent")));
@property BOOL isLenient __attribute__((swift_name("isLenient")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property id<SharedCodeKotlinx_serialization_runtimeSerialModule> serialModule __attribute__((swift_name("serialModule")));
@property BOOL serializeSpecialFloatingPointValues __attribute__((swift_name("serializeSpecialFloatingPointValues")));
@property BOOL strictMode __attribute__((swift_name("strictMode"))) __attribute__((unavailable("'strictMode = true' is replaced with 3 new configuration parameters: 'ignoreUnknownKeys = false' to fail if an unknown key is encountered, 'serializeSpecialFloatingPointValues = false' to fail on 'NaN' and 'Infinity' values, 'isLenient = false' to prohibit parsing of any non-compliant or malformed JSON")));
@property BOOL unquoted __attribute__((swift_name("unquoted"))) __attribute__((unavailable("'unquoted' is deprecated in the favour of 'unquotedPrint'")));
@property BOOL unquotedPrint __attribute__((swift_name("unquotedPrint")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonConfiguration")))
@interface SharedCodeKotlinx_serialization_runtimeJsonConfiguration : SharedCodeBase
- (instancetype)initWithEncodeDefaults:(BOOL)encodeDefaults ignoreUnknownKeys:(BOOL)ignoreUnknownKeys isLenient:(BOOL)isLenient serializeSpecialFloatingPointValues:(BOOL)serializeSpecialFloatingPointValues allowStructuredMapKeys:(BOOL)allowStructuredMapKeys prettyPrint:(BOOL)prettyPrint unquotedPrint:(BOOL)unquotedPrint indent:(NSString *)indent useArrayPolymorphism:(BOOL)useArrayPolymorphism classDiscriminator:(NSString *)classDiscriminator updateMode:(SharedCodeKotlinx_serialization_runtimeUpdateMode *)updateMode __attribute__((swift_name("init(encodeDefaults:ignoreUnknownKeys:isLenient:serializeSpecialFloatingPointValues:allowStructuredMapKeys:prettyPrint:unquotedPrint:indent:useArrayPolymorphism:classDiscriminator:updateMode:)"))) __attribute__((objc_designated_initializer));
- (SharedCodeKotlinx_serialization_runtimeJsonConfiguration *)doCopyEncodeDefaults:(BOOL)encodeDefaults ignoreUnknownKeys:(BOOL)ignoreUnknownKeys isLenient:(BOOL)isLenient serializeSpecialFloatingPointValues:(BOOL)serializeSpecialFloatingPointValues allowStructuredMapKeys:(BOOL)allowStructuredMapKeys prettyPrint:(BOOL)prettyPrint unquotedPrint:(BOOL)unquotedPrint indent:(NSString *)indent useArrayPolymorphism:(BOOL)useArrayPolymorphism classDiscriminator:(NSString *)classDiscriminator updateMode:(SharedCodeKotlinx_serialization_runtimeUpdateMode *)updateMode __attribute__((swift_name("doCopy(encodeDefaults:ignoreUnknownKeys:isLenient:serializeSpecialFloatingPointValues:allowStructuredMapKeys:prettyPrint:unquotedPrint:indent:useArrayPolymorphism:classDiscriminator:updateMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeJsonElement")))
@interface SharedCodeKotlinx_serialization_runtimeJsonElement : SharedCodeBase
- (BOOL)containsKey_:(NSString *)key __attribute__((swift_name("contains(key_:)")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) NSArray<SharedCodeKotlinx_serialization_runtimeJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, SharedCodeKotlinx_serialization_runtimeJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeJsonPrimitive *primitive __attribute__((swift_name("primitive")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol SharedCodeKotlinx_serialization_runtimeEncoder
@required
- (id<SharedCodeKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(SharedCodeKotlinArray *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)")));
- (id<SharedCodeKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeSerializers:(SharedCodeKotlinArray *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol SharedCodeKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<SharedCodeKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SharedCodeKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()"))) __attribute__((deprecated("Deprecated in the favour of 'annotations' property")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedCodeKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name"))) __attribute__((unavailable("name property deprecated in the favour of serialName")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol SharedCodeKotlinx_serialization_runtimeDecoder
@required
- (id<SharedCodeKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeParams:(SharedCodeKotlinArray *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedCodeKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol SharedCodeKodein_diDIBindBuilder
@required
@property (readonly) SharedCodeKodein_typeTypeToken *contextType __attribute__((swift_name("contextType")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithContext")))
@protocol SharedCodeKodein_diDIBindBuilderWithContext <SharedCodeKodein_diDIBindBuilder>
@required
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol SharedCodeKodein_diDIBindBuilderWithScope <SharedCodeKodein_diDIBindBuilder>
@required
@property (readonly) id<SharedCodeKodein_diScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol SharedCodeKodein_diDIBuilder <SharedCodeKodein_diDIBindBuilderWithContext, SharedCodeKodein_diDIBindBuilderWithScope>
@required
- (id<SharedCodeKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(SharedCodeBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (id<SharedCodeKodein_diDIBuilderTypeBinder>)BindType:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag overrides:(SharedCodeBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)RegisterContextTranslatorTranslator:(id<SharedCodeKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<SharedCodeKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(SharedCodeBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(SharedCodeKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(SharedCodeKotlinArray *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(SharedCodeKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<SharedCodeKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<SharedCodeKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol SharedCodeKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(SharedCodeKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SharedCodeKtor_utilsAttributeKey *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SharedCodeKtor_utilsAttributeKey : SharedCodeBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SharedCodeKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedCodeKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedCodeKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SharedCodeKtor_client_coreProxyConfig : SharedCodeBase
- (instancetype)initWithUrl:(SharedCodeKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCodeKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SharedCodeKtor_utilsPipelinePhase : SharedCodeBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedCodeKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedCodeKotlinSuspendFunction2 <SharedCodeKotlinFunction>
@required
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedCodeKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol SharedCodeKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<SharedCodeKotlinKClass>)kClass serializer:(id<SharedCodeKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedCodeKotlinKClass>)baseClass actualClass:(id<SharedCodeKotlinKClass>)actualClass actualSerializer:(id<SharedCodeKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedCodeKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedCodeKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedCodeKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedCodeKotlinKClass <SharedCodeKotlinKDeclarationContainer, SharedCodeKotlinKAnnotatedElement, SharedCodeKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface SharedCodeKotlinx_serialization_runtimeUpdateMode : SharedCodeKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCodeKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SharedCodeKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SharedCodeKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(SharedCodeKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeJsonPrimitive")))
@interface SharedCodeKotlinx_serialization_runtimeJsonPrimitive : SharedCodeKotlinx_serialization_runtimeJsonElement
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) SharedCodeBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) SharedCodeDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) SharedCodeFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) SharedCodeInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) SharedCodeLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeJsonPrimitive *primitive __attribute__((swift_name("primitive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonNull")))
@interface SharedCodeKotlinx_serialization_runtimeJsonNull : SharedCodeKotlinx_serialization_runtimeJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol SharedCodeKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedCodeKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeUnitElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedCodeKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface SharedCodeKotlinx_serialization_runtimeSerialKind : SharedCodeBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol SharedCodeKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)decodeUnitElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDescriptor:(id<SharedCodeKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedCodeKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)")));
@property (readonly) id<SharedCodeKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SharedCodeKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol SharedCodeKodein_diDIBuilderDirectBinder
@required
- (void)fromBinding:(id<SharedCodeKodein_diDIBinding>)binding __attribute__((swift_name("from(binding:)")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol SharedCodeKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<SharedCodeKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@interface SharedCodeKodein_typeTypeToken : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedCodeKotlinArray *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (SharedCodeKodein_typeTypeToken * _Nullable)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<SharedCodeKodein_typeTypeToken *> *)getSuper __attribute__((swift_name("getSuper()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isAssignableFromTypeToken:(SharedCodeKodein_typeTypeToken *)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol SharedCodeKodein_diContextTranslator
@required
- (id)translateCtx:(id)ctx __attribute__((swift_name("translate(ctx:)")));
@property (readonly) SharedCodeKodein_typeTypeToken *contextType __attribute__((swift_name("contextType")));
@property (readonly) SharedCodeKodein_typeTypeToken *scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol SharedCodeKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(SharedCodeKodein_typeTypeToken *)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol SharedCodeKodein_diDirectDIAware
@required
@property (readonly) id<SharedCodeKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@property (readonly) id<SharedCodeKodein_diDirectDI> dkodein __attribute__((swift_name("dkodein"))) __attribute__((unavailable("!!! THIS HAS BEEN REMOVED FROM 7.0 !!! As soon as you are using _Kodein-DI 7.x_, the old API named _Kodein_ API is broken. we highly recommend that you take some time to move from it to the new API with _DI_ named objects.")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol SharedCodeKodein_diDirectDIBase <SharedCodeKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<SharedCodeKodein_diDirectDI>)OnContext:(id<SharedCodeKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<SharedCodeKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<SharedCodeKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedCodeKodein_diDI> kodein __attribute__((swift_name("kodein"))) __attribute__((unavailable("!!! THIS HAS BEEN REMOVED FROM 7.0 !!! As soon as you are using _Kodein-DI 7.x_, the old API named _Kodein_ API is broken. we highly recommend that you take some time to move from it to the new API with _DI_ named objects.")));
@property (readonly) id<SharedCodeKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol SharedCodeKodein_diDirectDI <SharedCodeKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol SharedCodeKodein_diDIContainerBuilder
@required
- (void)bindKey:(SharedCodeKodein_diDIKey *)key binding:(id<SharedCodeKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(SharedCodeBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<SharedCodeKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<SharedCodeKodein_diDIKey *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<SharedCodeKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<SharedCodeKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<SharedCodeKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol SharedCodeKodein_diScope
@required
- (SharedCodeKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedCodeKtor_httpUrl : SharedCodeBase
- (instancetype)initWithProtocol:(SharedCodeKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedCodeKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (SharedCodeKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedCodeKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedCodeKtor_httpUrl *)doCopyProtocol:(SharedCodeKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedCodeKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedCodeKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedCodeKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol SharedCodeKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryDi:(id<SharedCodeKodein_diBindingDI>)di key:(SharedCodeKodein_diDIKey *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol SharedCodeKodein_diDIBinding <SharedCodeKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) SharedCodeKodein_typeTypeToken *argType __attribute__((swift_name("argType")));
@property (readonly) SharedCodeKodein_typeTypeToken *contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SharedCodeKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) SharedCodeKodein_typeTypeToken *createdType __attribute__((swift_name("createdType")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<SharedCodeKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@protocol SharedCodeKodein_diDIContext
@required
@property (readonly) SharedCodeKodein_typeTypeToken *type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol SharedCodeKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(SharedCodeKodein_diDIKey *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(SharedCodeKodein_diDIKey *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(SharedCodeKodein_diDIKey *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(SharedCodeKodein_diDIKey *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(SharedCodeKodein_diDIKey *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(SharedCodeKodein_diDIKey *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<SharedCodeKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol SharedCodeKodein_diDIAware
@required
@property (readonly) id<SharedCodeKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedCodeKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) SharedCodeKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@property (readonly) id<SharedCodeKodein_diDI> kodein __attribute__((swift_name("kodein"))) __attribute__((unavailable("!!! THIS HAS BEEN REMOVED FROM 7.0 !!! As soon as you are using _Kodein-DI 7.x_, the old API named _Kodein_ API is broken. we highly recommend that you take some time to move from it to the new API with _DI_ named objects.")));
@property (readonly) id<SharedCodeKodein_diDIContext> kodeinContext __attribute__((swift_name("kodeinContext"))) __attribute__((unavailable("!!! THIS HAS BEEN REMOVED FROM 7.0 !!! As soon as you are using _Kodein-DI 7.x_, the old API named _Kodein_ API is broken. we highly recommend that you take some time to move from it to the new API with _DI_ named objects.")));
@property (readonly) SharedCodeKodein_diDITrigger * _Nullable kodeinTrigger __attribute__((swift_name("kodeinTrigger"))) __attribute__((unavailable("!!! THIS HAS BEEN REMOVED FROM 7.0 !!! As soon as you are using _Kodein-DI 7.x_, the old API named _Kodein_ API is broken. we highly recommend that you take some time to move from it to the new API with _DI_ named objects.")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol SharedCodeKodein_diDI <SharedCodeKodein_diDIAware>
@required
@property (readonly) id<SharedCodeKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface SharedCodeKodein_diDIKey : SharedCodeBase
- (instancetype)initWithContextType:(SharedCodeKodein_typeTypeToken *)contextType argType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (SharedCodeKodein_typeTypeToken *)component1 __attribute__((swift_name("component1()")));
- (SharedCodeKodein_typeTypeToken *)component2 __attribute__((swift_name("component2()")));
- (SharedCodeKodein_typeTypeToken *)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedCodeKodein_diDIKey *)doCopyContextType:(SharedCodeKodein_typeTypeToken *)contextType argType:(SharedCodeKodein_typeTypeToken *)argType type:(SharedCodeKodein_typeTypeToken *)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCodeKodein_typeTypeToken *argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) SharedCodeKodein_typeTypeToken *contextType __attribute__((swift_name("contextType")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) SharedCodeKodein_typeTypeToken *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol SharedCodeKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface SharedCodeKodein_diScopeRegistry : SharedCodeBase <SharedCodeKodein_diScopeCloseable>
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(SharedCodeKodein_diReference *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey_:(id)key __attribute__((swift_name("getOrNull(key_:)")));
- (void)removeKey_:(id)key __attribute__((swift_name("remove(key_:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedCodeKtor_httpURLProtocol : SharedCodeBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedCodeKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol SharedCodeKodein_diDIBindingCopier
@required
- (id<SharedCodeKodein_diDIBinding>)doCopyBuilder:(id<SharedCodeKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol SharedCodeKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diSimpleBindingDI")))
@protocol SharedCodeKodein_diSimpleBindingDI <SharedCodeKodein_diDirectDI, SharedCodeKodein_diWithContext>
@required
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol SharedCodeKodein_diBindingDI <SharedCodeKodein_diSimpleBindingDI>
@required
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol SharedCodeKodein_diDITree
@required
- (NSArray<SharedCodeKotlinTriple *> *)findKey:(SharedCodeKodein_diDIKey *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<SharedCodeKotlinTriple *> *)findSearch:(SharedCodeKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (SharedCodeKotlinTriple * _Nullable)getKey__:(SharedCodeKodein_diDIKey *)key __attribute__((swift_name("get(key__:)")));
@property (readonly) NSDictionary<SharedCodeKodein_diDIKey *, NSArray<SharedCodeKodein_diDIDefinition *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<SharedCodeKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<SharedCodeKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface SharedCodeKodein_diDITrigger : SharedCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<SharedCodeKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface SharedCodeKodein_diReference : SharedCodeBase
- (instancetype)initWithCurrent:(id)current next:(id _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (id _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (SharedCodeKodein_diReference *)doCopyCurrent:(id)current next:(id _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id current __attribute__((swift_name("current")));
@property (readonly) id _Nullable (^next)(void) __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SharedCodeKotlinTriple : SharedCodeBase
- (instancetype)initWithFirst:(id _Nullable)first second:(id _Nullable)second third:(id _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedCodeKotlinTriple *)doCopyFirst:(id _Nullable)first second:(id _Nullable)second third:(id _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) id _Nullable first __attribute__((swift_name("first")));
@property (readonly) id _Nullable second __attribute__((swift_name("second")));
@property (readonly) id _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface SharedCodeKodein_diSearchSpecs : SharedCodeBase
- (instancetype)initWithContextType:(SharedCodeKodein_typeTypeToken * _Nullable)contextType argType:(SharedCodeKodein_typeTypeToken * _Nullable)argType type:(SharedCodeKodein_typeTypeToken * _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedCodeKodein_typeTypeToken * _Nullable argType __attribute__((swift_name("argType")));
@property SharedCodeKodein_typeTypeToken * _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property SharedCodeKodein_typeTypeToken * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface SharedCodeKodein_diDIDefining : SharedCodeBase
- (instancetype)initWithBinding:(id<SharedCodeKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedCodeKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface SharedCodeKodein_diDIDefinition : SharedCodeKodein_diDIDefining
- (instancetype)initWithBinding:(id<SharedCodeKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<SharedCodeKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<SharedCodeKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<SharedCodeKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol SharedCodeKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<SharedCodeKodein_diBindingDI>)di key_:(SharedCodeKodein_diDIKey *)key __attribute__((swift_name("getFactory(di:key_:)")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol SharedCodeKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
