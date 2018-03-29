//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCFriendsFeedRankingScoring-Protocol.h"

@class NSString, SCASTProvider, SCLazy;

@interface SCFriendsFeedRankingASTScorer : NSObject <SCFriendsFeedRankingScoring>
{
    SCASTProvider *_astProvider;
    SCLazy *_astLazy;
}

- (void).cxx_destruct;
- (id)_extractAST;
- (void)prepareForScoringItems:(id)arg1;
- (float)scoreForFeatures:(id)arg1 debugInfoPtr:(id *)arg2;
- (id)initWithASTProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

