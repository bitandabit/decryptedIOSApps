//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNewReleasesFeature.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTNewReleasesFeatureImplementation : NSObject <SPTService, SPTNewReleasesFeature>
{
    id <SPTContainerService> _containerService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPushNotificationSessionService> _pushNotificationSessionService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPushNotificationSessionService> pushNotificationSessionService; // @synthesize pushNotificationSessionService=_pushNotificationSessionService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)tasksForAlbumURI:(id)arg1 upsellLineItemID:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
