//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCDelayedFriendStoriesToPrune : NSObject
{
    _Bool _isShared;
    NSString *_kvoUsername;
    NSArray *_storiesArray;
}

@property(readonly, copy, nonatomic) NSArray *storiesArray; // @synthesize storiesArray=_storiesArray;
@property(readonly, nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(readonly, copy, nonatomic) NSString *kvoUsername; // @synthesize kvoUsername=_kvoUsername;
- (void).cxx_destruct;
- (id)initWithKvoUsername:(id)arg1 isShared:(_Bool)arg2 storiesArray:(id)arg3;

@end

