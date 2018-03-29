//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTService.h"
#import "SlateFeature.h"

@class NSString, SPTAllocationContext, SPTSlateBuilderProvider, SPTSlatePresenter;

@interface SlateFeatureImplementation : NSObject <SPTService, SlateFeature>
{
    SPTSlatePresenter *_slatePresenter;
    SPTSlateBuilderProvider *_builderProvider;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTSlateBuilderProvider *builderProvider; // @synthesize builderProvider=_builderProvider;
@property(retain, nonatomic) SPTSlatePresenter *slatePresenter; // @synthesize slatePresenter=_slatePresenter;
- (void).cxx_destruct;
- (id)provideSlateManager:(id)arg1;
- (id)provideSlateManager;
- (id)provideSlateBuilderProvider;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
