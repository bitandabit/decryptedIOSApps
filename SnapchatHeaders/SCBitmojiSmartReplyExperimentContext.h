//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBitmojiSmartReplyExperimentContext : SCExperimentContext
{
    _Bool _enableBitmojiSmartReply;
    long long _numTopResultsToShuffle;
}

@property(readonly, nonatomic) long long numTopResultsToShuffle; // @synthesize numTopResultsToShuffle=_numTopResultsToShuffle;
@property(readonly, nonatomic) _Bool enableBitmojiSmartReply; // @synthesize enableBitmojiSmartReply=_enableBitmojiSmartReply;
- (void)setupParameters;
- (id)experimentName;

@end

