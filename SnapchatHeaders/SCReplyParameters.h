//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SCReplyParameters : NSObject
{
    _Bool _isMischief;
    _Bool _addToMyStory;
    _Bool _isMobStory;
    _Bool _isDoubleTap;
    _Bool _isBirthday;
    _Bool _isFromContextMenu;
    _Bool _addToOurStory;
    _Bool _isBottomSnapCamera;
    NSString *_replyUsername;
    long long _replyType;
    NSString *_context;
    long long _pageSource;
    NSString *_placeID;
    NSString *_placeName;
    NSNumber *_cellViewPosition;
}

@property(nonatomic) _Bool isBottomSnapCamera; // @synthesize isBottomSnapCamera=_isBottomSnapCamera;
@property(copy, nonatomic) NSNumber *cellViewPosition; // @synthesize cellViewPosition=_cellViewPosition;
@property(copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(nonatomic) _Bool addToOurStory; // @synthesize addToOurStory=_addToOurStory;
@property(nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(nonatomic) _Bool isFromContextMenu; // @synthesize isFromContextMenu=_isFromContextMenu;
@property(nonatomic) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(nonatomic) _Bool isDoubleTap; // @synthesize isDoubleTap=_isDoubleTap;
@property(nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(nonatomic) _Bool isMobStory; // @synthesize isMobStory=_isMobStory;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(nonatomic) _Bool isMischief; // @synthesize isMischief=_isMischief;
@property(copy, nonatomic) NSString *replyUsername; // @synthesize replyUsername=_replyUsername;
- (void).cxx_destruct;
- (_Bool)isMischiefSnap;

@end

