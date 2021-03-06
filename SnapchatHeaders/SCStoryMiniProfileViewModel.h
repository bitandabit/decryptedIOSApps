//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL, SCCheetahCompositeStoryId, SCMiniProfileStorySubscribeButtonViewModel, SCSearchNetworkImage;

@interface SCStoryMiniProfileViewModel : NSObject <NSCopying>
{
    _Bool _isSubscribable;
    SCCheetahCompositeStoryId *_compositeStoryId;
    unsigned long long _subscribeState;
    SCSearchNetworkImage *_image;
    NSString *_title;
    NSString *_subtitle;
    NSString *_detailText;
    NSURL *_deeplinkUrl;
    NSArray *_storyOptions;
    SCMiniProfileStorySubscribeButtonViewModel *_buttonViewModel;
}

@property(readonly, copy, nonatomic) SCMiniProfileStorySubscribeButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
@property(readonly, copy, nonatomic) NSArray *storyOptions; // @synthesize storyOptions=_storyOptions;
@property(readonly, copy, nonatomic) NSURL *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) SCSearchNetworkImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long subscribeState; // @synthesize subscribeState=_subscribeState;
@property(readonly, nonatomic) _Bool isSubscribable; // @synthesize isSubscribable=_isSubscribable;
@property(readonly, copy, nonatomic) SCCheetahCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompositeStoryId:(id)arg1 isSubscribable:(_Bool)arg2 subscribeState:(unsigned long long)arg3 image:(id)arg4 title:(id)arg5 subtitle:(id)arg6 detailText:(id)arg7 deeplinkUrl:(id)arg8 storyOptions:(id)arg9 buttonViewModel:(id)arg10;

@end

