//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTService.h"
#import "SPTSpiderMenuService.h"

@class NSString, SPTAllocationContext;

@interface SPTSpiderMenuServiceImplementation : NSObject <SPTService, SPTSpiderMenuService>
{
    id <SPTContainerService> _containerService;
    id <SPTAbbaService> _abbaService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTSpiderGestureRegistry> _registry;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTSpiderGestureRegistry> registry; // @synthesize registry=_registry;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)unload;
- (void)setupABBA;
- (id)provideSpiderMenuRegistry;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

