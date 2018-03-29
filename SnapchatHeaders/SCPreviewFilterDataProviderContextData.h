//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, SCReplyParameters;

@interface SCPreviewFilterDataProviderContextData : NSObject
{
    SCReplyParameters *_replyParameters;
    NSArray *_friends;
    long long _cameraContext;
    long long _mediaTypeContext;
    NSArray *_actionmojiActionTypes;
    NSArray *_visualContexts;
    NSDate *_snapTakenTimestamp;
}

@property(readonly, nonatomic) NSDate *snapTakenTimestamp; // @synthesize snapTakenTimestamp=_snapTakenTimestamp;
@property(readonly, nonatomic) NSArray *visualContexts; // @synthesize visualContexts=_visualContexts;
@property(readonly, nonatomic) NSArray *actionmojiActionTypes; // @synthesize actionmojiActionTypes=_actionmojiActionTypes;
@property(readonly, nonatomic) long long mediaTypeContext; // @synthesize mediaTypeContext=_mediaTypeContext;
@property(readonly, nonatomic) long long cameraContext; // @synthesize cameraContext=_cameraContext;
@property(readonly, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(readonly, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
- (void).cxx_destruct;
- (id)friendBitmojis;
- (id)initWithReplyParameters:(id)arg1 friends:(id)arg2 cameraContext:(long long)arg3 mediaTypeContext:(long long)arg4 actionmojiActionTypes:(id)arg5 visualContexts:(id)arg6 snapTakenTimestamp:(id)arg7;

@end

