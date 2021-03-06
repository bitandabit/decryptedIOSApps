//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"

@class NSCache, NSString;

@interface SCSearchCacheManager : NSObject <SCTimeProfilable>
{
    NSCache *_remoteImageCache;
    NSCache *_localImageCache;
}

+ (int)context;
+ (id)shared;
- (void).cxx_destruct;
- (void)clearCache;
- (id)imageForID:(id)arg1;
- (void)saveImage:(id)arg1 withID:(id)arg2;
- (void)imageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

