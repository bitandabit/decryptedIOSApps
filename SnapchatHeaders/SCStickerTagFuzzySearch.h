//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"

@class NSString, SCBitmojiStickerManager;
@protocol SCPerforming;

@interface SCStickerTagFuzzySearch : NSObject <SCTimeProfilable>
{
    id <SCPerforming> _dispatchPerformer;
    SCBitmojiStickerManager *_bitmojiStickerManager;
}

+ (int)context;
+ (_Bool)_textHasPunctuationsOnly:(id)arg1;
+ (id)processedTextWithText:(id)arg1;
+ (id)removeDup:(id)arg1;
+ (_Bool)_isOffensiveWord:(id)arg1;
+ (_Bool)isSearchEnabled;
+ (_Bool)isStopWord:(id)arg1;
- (void).cxx_destruct;
- (void)searchStickersWithSingleText:(id)arg1 avatarIds:(id)arg2 stickerTarget:(long long)arg3 shouldIncludeFriendBitmojiForQuickSend:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)searchStickersWithSingleText:(id)arg1 stickerTarget:(long long)arg2 shouldIncludeFriendBitmojiForQuickSend:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchStickersWithFuzzyTextAndParameter:(id)arg1 stickerTarget:(long long)arg2 avatarIds:(id)arg3 shouldIncludeFriendBitmojiForQuickSend:(_Bool)arg4 similarity:(double)arg5 numShortList:(long long)arg6 numFuzzyTag:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)searchStickersWithFuzzyTextAndParameter:(id)arg1 stickerTarget:(long long)arg2 shouldIncludeFriendBitmojiForQuickSend:(_Bool)arg3 similarity:(double)arg4 numShortList:(long long)arg5 numFuzzyTag:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)searchStickersWithFuzzyText:(id)arg1 avatarIds:(id)arg2 stickerTarget:(long long)arg3 shouldIncludeFriendBitmojiForQuickSend:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)searchStickersWithFuzzyText:(id)arg1 stickerTarget:(long long)arg2 shouldIncludeFriendBitmojiForQuickSend:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithBitmojiStickerManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
