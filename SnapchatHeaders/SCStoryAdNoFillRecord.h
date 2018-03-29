//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCStoriesViewingSession;

@interface SCStoryAdNoFillRecord : NSObject
{
    _Bool _isSharedStory;
    NSString *_username;
    long long _viewingType;
    unsigned long long _adStreamPosition;
    NSString *_adUnitId;
    NSString *_adRequestClientId;
    unsigned long long _adSkipCount;
    double _adResolveTimeSec;
    SCStoriesViewingSession *_storiesViewingSession;
}

@property(nonatomic) __weak SCStoriesViewingSession *storiesViewingSession; // @synthesize storiesViewingSession=_storiesViewingSession;
@property(nonatomic) double adResolveTimeSec; // @synthesize adResolveTimeSec=_adResolveTimeSec;
@property(nonatomic) unsigned long long adSkipCount; // @synthesize adSkipCount=_adSkipCount;
@property(copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(nonatomic) _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
@property(nonatomic) unsigned long long adStreamPosition; // @synthesize adStreamPosition=_adStreamPosition;
@property(nonatomic) long long viewingType; // @synthesize viewingType=_viewingType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

@end

