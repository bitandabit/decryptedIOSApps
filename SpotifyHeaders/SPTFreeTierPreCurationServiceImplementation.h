//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierPreCurationService.h"

@class NSString, SPTAllocationContext, SPTFreeTierPreCurationTestManagerImplementation;

@interface SPTFreeTierPreCurationServiceImplementation : NSObject <SPTFreeTierPreCurationService>
{
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    SPTFreeTierPreCurationTestManagerImplementation *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierPreCurationTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideTestManager;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

