//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSABaseComponent.h"

#import "LSAComponentListener-Protocol.h"
#import "LSAExpressionsListener-Protocol.h"
#import "LSAPlatformTrackingDelegate-Protocol.h"

@class LSACategory, LSATrackingComponentListenerAnnouncer, NSString;
@protocol LSATrackingComponentDelegate;

@interface LSATrackingComponent : LSABaseComponent <LSAComponentListener, LSAExpressionsListener, LSAPlatformTrackingDelegate>
{
    NSString *_trackingResourcesPath;
    struct shared_ptr<LSAExpressionsDelegateWrapper> _expressionsDelegateWrapper;
    struct shared_ptr<LSAPlatformTrackingDelegateWrapper> _platformTrackingDelegateWrapper;
    LSATrackingComponentListenerAnnouncer *_trackingComponentAnnouncer;
    struct unordered_set<LS::TrackingRequirement, std::__1::hash<LS::TrackingRequirement>, std::__1::equal_to<LS::TrackingRequirement>, std::__1::allocator<LS::TrackingRequirement>> _activeRequirements;
    struct unordered_set<LS::TrackingRequirement, std::__1::hash<LS::TrackingRequirement>, std::__1::equal_to<LS::TrackingRequirement>, std::__1::allocator<LS::TrackingRequirement>> _processedRequirements;
    id <LSATrackingComponentDelegate> _delegate;
    LSACategory *_activeCategory;
}

@property(retain) LSACategory *activeCategory; // @synthesize activeCategory=_activeCategory;
@property(nonatomic) __weak id <LSATrackingComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)requestFinishTrackingProcessingIfNeeded;
- (void)component:(id)arg1 didSetComplexEffect:(id)arg2;
- (void)component:(id)arg1 willSetComplexEffect:(id)arg2;
- (void)componentDidProcessFrame:(id)arg1;
- (void)componentWillProcessFrame:(id)arg1;
- (void)didRecognizeFaces:(unsigned long long)arg1;
- (void)didRecognizeExpression:(id)arg1;
- (_Bool)isDeviceSupported;
- (void)didFinishTrackingProcessingForRequirement:(unsigned int)arg1;
-     // Error parsing type: B80@0:8{?=[4]}16, name: didRequestTrackingRestartWithExistingTransform:
- (_Bool)didRequestTrackingRestartAtPoint:(struct CGPoint)arg1;
- (_Bool)didRequestTrackingEndWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingReset;
- (_Bool)didRequestTrackingBeginWithRequirement:(unsigned int)arg1;
- (_Bool)didRequestTrackingDataGeneration:(struct TrackingData *)arg1 useAnchors:(_Bool)arg2 requirements:(unsigned int)arg3;
- (void)clearResources;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;
- (id)initWithPerformer:(id)arg1;
- (void)innerActivateCategory:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setFaceTrackingResourcesPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShouldAnimateNextInitWithCompletion:(CDUnknownBlockType)arg1;
- (void)setInitAnimationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restartTrackingWithNormalizedPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restartTrackingWithCompletion:(CDUnknownBlockType)arg1;
- (void)detectActiveCategoryForPoint:(struct CGPoint)arg1 categories:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearActiveCategoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setFaceTrackingResourcesWithContent:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
