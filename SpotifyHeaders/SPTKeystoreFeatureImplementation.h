//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTKeystoreFeature.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTKeystoreFeatureImplementation : NSObject <SPTService, SPTKeystoreFeature>
{
    id <SPTCoreService> _coreService;
    id <CosmosFeature> _cosmosFeature;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (id)provideKeystoreDataSourceForBaseURL:(id)arg1 viewIdentifier:(id)arg2 viewVersion:(id)arg3;
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
