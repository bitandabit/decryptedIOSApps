//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCUserSession;

@interface SCContextAVAssetProvider : NSObject
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_findAVAssetForStreamingMediaURL:(id)arg1 encryptionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findAVAssetForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findAVAssetForContextSessionParams:(id)arg1 mediaTrackType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end
