//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LSAComponentListenerAnnouncer, LSAQueuePerformer, NSMutableDictionary;

@interface LSAComponentManager : NSObject
{
    NSMutableDictionary *_components;
    LSAComponentListenerAnnouncer *_announcer;
    LSAQueuePerformer *_performer;
    struct mutex _mutex;
    shared_ptr_6e078de4 _coreManager;
}

+ (void)setLogLevel:(unsigned long long)arg1;
+ (id)defaultComponentManagerWithContext:(id)arg1 enableTrackers:(_Bool)arg2;
+ (id)defaultComponentManagerWithContext:(id)arg1 enableTrackers:(_Bool)arg2 asyncTracking:(_Bool)arg3 enableAudioPlayback:(_Bool)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearResources;
- (_Bool)prepareDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (void)prepareComponentsWithClasses:(id)arg1 configuration:(id)arg2;
- (void)applicationDidEnterBackground;
- (void)clearAllResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)componentWithClass:(Class)arg1;
- (void)setUserDataCachePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setResourceCachePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeviceClass:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShouldCatchExceptions:(_Bool)arg1;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 enableTrackers:(_Bool)arg2 componentClasses:(id)arg3;
- (id)initWithContext:(id)arg1 enableTrackers:(_Bool)arg2 asyncTracking:(_Bool)arg3 enableAudioPlayback:(_Bool)arg4 componentClasses:(id)arg5;
- (id)init;
- (id)snapRecordingComponent;
- (id)lensAnalyticsDataComponent;
- (id)videoCodecComponent;
- (id)localizationComponent;
- (id)geoDataComponent;
- (id)uriServiceComponent;
- (id)remoteAssetsComponent;
- (id)bitmoji3DComponent;
- (id)userDataComponent;
- (id)debugComponent;
- (id)compassComponent;
- (id)locationComponent;
- (id)videoProcessingComponent;
- (id)trackingSerializationComponent;
- (id)trackingComponent;
- (id)touchProcessingComponent;
- (id)snapcodeComponent;
- (id)presetsComponent;
- (id)externalImageComponent;
- (id)effectFilterFactoryComponent;
- (id)effectComponent;
- (id)deviceMotionComponent;
- (id)bitmojiEffectComponent;
- (id)audioProcessingComponent;
- (id)analyticsComponent;

@end

