//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCUserSession;
@protocol SCPerforming;

@interface SCDdmlFriendRankingAppManager : NSObject
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

