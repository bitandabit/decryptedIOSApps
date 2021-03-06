//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchItemDownloader.h"

@class SCAvatarImageRemoteLoader, SCSearchFaviconImageRemoteLoader, SCSessionRequestManager;

@interface SCSearchImageDownloader : SCSearchItemDownloader
{
    SCSessionRequestManager *_requestManager;
    SCSearchFaviconImageRemoteLoader *_faviconDownloader;
    SCAvatarImageRemoteLoader *_avatarImageLoader;
}

- (void).cxx_destruct;
- (id)downloadQueue;
- (id)cache;
- (id)requestManager;
- (id)requestForItem:(id)arg1;
- (id)cacheKeyForItem:(id)arg1;
- (id)resultFromData:(id)arg1 withItem:(id)arg2;
- (id)decryptData:(id)arg1 withItem:(id)arg2;
- (_Bool)isItemValid:(id)arg1;
- (id)loadItem:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)initWithUserSession:(id)arg1;

@end

