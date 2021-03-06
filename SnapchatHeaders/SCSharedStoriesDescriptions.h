//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface SCSharedStoriesDescriptions : NSObject <NSCoding>
{
    NSString *_mySharedStoryDescription;
    NSString *_autoAddedFriendDescription;
    NSString *_friendDescription;
    NSString *_sharedPostAlertTitle;
    NSString *_sharedPostAlertBody;
    NSString *_viewJITAlertTitle;
    NSString *_viewJITAlertBody;
    NSString *_sharedPostAttributionBody;
    NSString *_sharedAttributionBody;
}

@property(copy, nonatomic) NSString *sharedAttributionBody; // @synthesize sharedAttributionBody=_sharedAttributionBody;
@property(copy, nonatomic) NSString *sharedPostAttributionBody; // @synthesize sharedPostAttributionBody=_sharedPostAttributionBody;
@property(copy, nonatomic) NSString *viewJITAlertBody; // @synthesize viewJITAlertBody=_viewJITAlertBody;
@property(copy, nonatomic) NSString *viewJITAlertTitle; // @synthesize viewJITAlertTitle=_viewJITAlertTitle;
@property(copy, nonatomic) NSString *sharedPostAlertBody; // @synthesize sharedPostAlertBody=_sharedPostAlertBody;
@property(copy, nonatomic) NSString *sharedPostAlertTitle; // @synthesize sharedPostAlertTitle=_sharedPostAlertTitle;
@property(copy, nonatomic) NSString *friendDescription; // @synthesize friendDescription=_friendDescription;
@property(copy, nonatomic) NSString *autoAddedFriendDescription; // @synthesize autoAddedFriendDescription=_autoAddedFriendDescription;
@property(copy, nonatomic) NSString *mySharedStoryDescription; // @synthesize mySharedStoryDescription=_mySharedStoryDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

