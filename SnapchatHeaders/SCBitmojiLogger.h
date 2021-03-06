//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCBitmojiLogger : NSObject
{
    NSString *_bitmojiSessionId;
}

+ (id)shared;
- (void).cxx_destruct;
- (long long)_deepLinkSourceWithSourceString:(id)arg1;
- (long long)_getBlizzardUnlinkResultType:(unsigned long long)arg1;
- (long long)_getBlizzardEditType:(unsigned long long)arg1;
- (long long)_getBlizzardPage:(unsigned long long)arg1;
- (void)logDeepLinkingWithDeepLinkSource:(id)arg1 isUniversalLink:(_Bool)arg2 page:(unsigned long long)arg3;
- (void)logSelfieCancel:(unsigned long long)arg1;
- (void)logSelfieChange:(id)arg1 success:(_Bool)arg2 page:(unsigned long long)arg3;
- (void)logSelfieTap:(id)arg1 page:(unsigned long long)arg2;
- (void)logSelfieView:(unsigned long long)arg1;
- (void)logOutfitCancel:(unsigned long long)arg1;
- (void)logOutfitChange:(id)arg1 success:(_Bool)arg2 page:(unsigned long long)arg3;
- (void)logOutfitTap:(id)arg1 page:(unsigned long long)arg2;
- (void)logOutfitView:(unsigned long long)arg1;
- (void)logLinkSuccess:(unsigned long long)arg1;
- (void)logTapLinkButton:(unsigned long long)arg1 bitmojiInstalled:(_Bool)arg2;
- (void)logSeeLinkButton:(unsigned long long)arg1;
- (void)logUnlinkBitmoji:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)logSettingBitmojiView:(_Bool)arg1 page:(unsigned long long)arg2;
- (void)logEditBitmojiSave:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)logEditBitmoji:(unsigned long long)arg1 bitmojiInstalled:(_Bool)arg2 page:(unsigned long long)arg3;
- (id)init;

@end

