//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface SCMapStoriesState : NSObject
{
    NSSet *_viewedIds;
    NSSet *_locallyReportedIds;
}

+ (id)currentState;
@property(copy, nonatomic) NSSet *locallyReportedIds; // @synthesize locallyReportedIds=_locallyReportedIds;
@property(copy, nonatomic) NSSet *viewedIds; // @synthesize viewedIds=_viewedIds;
- (void).cxx_destruct;

@end
