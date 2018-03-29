//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCXThumbnailTextureFetcher-Protocol.h"

@class NSString, SCEncryptedCache;

@interface SCMapThumbnailTextureFetcher : NSObject <SCXThumbnailTextureFetcher>
{
    SCEncryptedCache *_imageCache;
}

@property(retain, nonatomic) SCEncryptedCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)_handleInvalidThumbnailWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_loadThumbnailDataFromCacheWithCacheKey:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveThumbnailDataToCache:(id)arg1 cacheKey:(id)arg2;
- (void)_performThumbnailRequestForThumbnail:(id)arg1 requestKey:(id)arg2 callbackQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)cancelRequestWithKey:(id)arg1 queuedOnly:(_Bool)arg2;
- (id)rpcGetThumbnailTexture:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

