//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaMediaManager-Protocol.h"

@class NSMutableDictionary, NSMutableSet, SCQueuePerformer, SCUserSession;
@protocol SCStreamingProxiedURLProviding;

@interface SCStoriesOperaMediaManager : NSObject <SCOperaMediaManager>
{
    SCUserSession *_userSession;
    NSMutableDictionary *_loadedImages;
    NSMutableDictionary *_loadedVideoAssets;
    NSMutableSet *_shouldBePreparedStoryClientIds;
    NSMutableDictionary *_storyClientIdToErrorType;
    id <SCStreamingProxiedURLProviding> _streamingProxiedURLProvider;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_preparedStoryPageProperties;
    NSMutableDictionary *_loadingBackgroundImagePreparedStoryPageProperties;
}

+ (id)loadingScreenImageKeyForStory:(id)arg1;
+ (id)imageKeyForStory:(id)arg1;
+ (id)overlayImageKeyForStory:(id)arg1;
+ (id)firstFrameKeyForStory:(id)arg1;
+ (id)videoAssetKeyForStory:(id)arg1;
+ (id)processFirstFrameImage:(id)arg1 forAudioStitch:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *loadingBackgroundImagePreparedStoryPageProperties; // @synthesize loadingBackgroundImagePreparedStoryPageProperties=_loadingBackgroundImagePreparedStoryPageProperties;
@property(readonly, nonatomic) NSMutableDictionary *preparedStoryPageProperties; // @synthesize preparedStoryPageProperties=_preparedStoryPageProperties;
- (void).cxx_destruct;
- (id)videoAssetForKey:(id)arg1;
- (void)removeVideoForKey:(id)arg1 story:(id)arg2;
- (void)setVideoAsset:(id)arg1 forKey:(id)arg2;
- (id)_proxiedVideoStreamingURLForStory:(id)arg1;
- (void)_loadStreamingStoryPropertiesForStory:(id)arg1 videoURL:(id)arg2 overlayImage:(id)arg3 previewImage:(id)arg4 videoSize:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_processStreamingZipData:(id)arg1 forStory:(id)arg2 overlayData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)removePreparedStory:(id)arg1;
- (_Bool)storyIsPrepared:(id)arg1;
- (_Bool)shouldPrepareToViewStory:(id)arg1;
- (unsigned long long)errorTypeForStory:(id)arg1;
- (void)setErrorType:(unsigned long long)arg1 forStory:(id)arg2;
- (id)removeStoryLoadingLayerImageForStory:(id)arg1;
- (id)updateStoryLoadingLayerImageForStory:(id)arg1 loadedImageKey:(id)arg2;
- (void)_prepareImageMediaForStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareVideoStreamingMediaForStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareVideoMediaForStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_useInMemoryPlayback;
- (void)prepareToViewStory:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

@end

