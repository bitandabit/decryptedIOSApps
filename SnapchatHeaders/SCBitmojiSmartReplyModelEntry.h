//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SCBitmojiSmartReplyModelEntry : NSObject
{
    _Bool _isFriendmoji;
    _Bool _isAnimated;
    NSString *_stickerID;
    NSMutableArray *_suggestedReplies;
}

@property(retain, nonatomic) NSMutableArray *suggestedReplies; // @synthesize suggestedReplies=_suggestedReplies;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) _Bool isFriendmoji; // @synthesize isFriendmoji=_isFriendmoji;
@property(retain, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
- (void).cxx_destruct;

@end

