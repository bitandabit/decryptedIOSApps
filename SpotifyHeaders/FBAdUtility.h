//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAdUtility : NSObject
{
}

+ (void)initializeAudienceNetwork;
+ (void)initialize;
+ (unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1;
+ (long long)serverOrientationFromInterfaceOrientationMask:(unsigned long long)arg1;
+ (_Bool)interfaceOrientationMaskSupportsLandscape:(unsigned long long)arg1;
+ (_Bool)interfaceOrientationMaskSupportsPortrait:(unsigned long long)arg1;
+ (long long)interfaceOrientationFromServerOrientation:(long long)arg1;
+ (double)deviceVolume;
+ (id)testHashForAdvertiserID:(id)arg1;
+ (id)testHashForSelf;
+ (id)getAdvertisingIdentifier;
+ (_Bool)isAdvertisingTrackingEnabled;
+ (_Bool)isStringEmpty:(id)arg1;
+ (id)attemptRecoveryOfObject:(id)arg1 ofClass:(Class)arg2;
+ (id)getPropertyListFromObject:(id)arg1;
+ (id)getObjectFromPropertyList:(id)arg1;
+ (id)getJSONStringFromObject:(id)arg1;
+ (id)getObjectFromJSONData:(id)arg1;
+ (id)getObjectFromJSONString:(id)arg1;
+ (id)cleanUserAgentString:(id)arg1;
+ (id)generateUserAgentStringFromRawString:(id)arg1;
+ (void)currentUserAgentWithBlock:(CDUnknownBlockType)arg1;
+ (id)currentLocale;
+ (id)createQueryStringFromParameters:(id)arg1;
+ (id)createQueryParameterFromKey:(id)arg1 object:(id)arg2;
+ (id)parseQuery:(id)arg1;
+ (id)parseQueryString:(id)arg1;
+ (void)sendRequestInternal:(id)arg1 withExtraData:(id)arg2 withPostData:(id)arg3;
+ (void)logTracker:(id)arg1 withExtraData:(id)arg2;
+ (void)displayVerboseDebugMessage:(id)arg1;
+ (void)displayDebugMessage:(id)arg1;
+ (void)throwExceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)throwExceptionWithName:(id)arg1 reason:(id)arg2;
+ (void)stopObservingBackgroundNotifications:(id)arg1;
+ (void)startObservingBackgroundNotifications:(id)arg1 usingBackgroundBlock:(CDUnknownBlockType)arg2 usingForegroundBlock:(CDUnknownBlockType)arg3;
+ (id)imageWithColor:(id)arg1;
+ (long long)getTemplateID:(struct FBAdSize)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 isFlexibileAdSize:(_Bool)arg2 actualAdSize:(struct CGSize)arg3;
+ (_Bool)isAdSizeType:(struct FBAdSize)arg1 sameWith:(struct FBAdSize)arg2;
+ (void)addGaussianBlurToImages:(id)arg1 usingContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)blurImage:(id)arg1 withRadius:(double)arg2 usingContext:(id)arg3;
+ (id)addGaussianBlurToImage:(id)arg1 usingContext:(id)arg2;
+ (id)snapshotOfView:(id)arg1 withRect:(struct CGRect)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)snapshotOfView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)allInteractableTargets:(id)arg1 excluding:(id)arg2;
+ (id)allInteractableTargets:(id)arg1;
+ (void)animateWithStandardAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)animateEnabled:(_Bool)arg1 withTransactionBlock:(CDUnknownBlockType)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateEnabled:(_Bool)arg1 withStandardAnimations:(CDUnknownBlockType)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithStandardAnimations:(CDUnknownBlockType)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithFade:(_Bool)arg1 duration:(double)arg2 views:(id)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)animateWithFadeOut:(id)arg1 duration:(double)arg2 customAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithFadeOut:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithFadeIn:(id)arg1 duration:(double)arg2 customAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithFadeIn:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithFade:(_Bool)arg1 views:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithFadeOut:(id)arg1 customAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithFadeOut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)animateWithFadeIn:(id)arg1 customAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithFadeIn:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)loadRemoteVideoWithURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)loadRemoteImageWithURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2 queue:(id)arg3 retry:(_Bool)arg4;
+ (void)loadRemoteImageWithURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2 retry:(_Bool)arg3;
+ (void)loadRemoteImageWithURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)loadRemoteImagesWithURLs:(id)arg1 withBlock:(CDUnknownBlockType)arg2 retry:(_Bool)arg3;
+ (void)traverseView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)currentWindow;
+ (id)traverseResponderChainForViewController:(id)arg1;
+ (id)viewControllerFromView:(id)arg1;
+ (id)topViewController;
+ (void)setTopViewControllerOverride:(id)arg1;
+ (id)topViewControllerOverride;
+ (void)setApplicationStatusBarHidden:(_Bool)arg1;
+ (id)findAdOnScreen;
+ (id)findAdInViewController:(id)arg1;
+ (_Bool)isViewMarked:(id)arg1;
+ (void)markView:(id)arg1;

@end

