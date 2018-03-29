//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCheetahCompositeStoryId;

@interface SCMomentsOptInEventModel : NSObject <NSCopying>
{
    _Bool _subscribed;
    _Bool _hideImage;
    _Bool _hideIcons;
    _Bool _isAllEvents;
    SCCheetahCompositeStoryId *_compositeStoryId;
    NSString *_iconURL;
    NSString *_text;
    NSString *_toggleOnBackgroundColorStart;
    NSString *_toggleOnBackgroundColorEnd;
}

@property(readonly, nonatomic) _Bool isAllEvents; // @synthesize isAllEvents=_isAllEvents;
@property(readonly, copy, nonatomic) NSString *toggleOnBackgroundColorEnd; // @synthesize toggleOnBackgroundColorEnd=_toggleOnBackgroundColorEnd;
@property(readonly, copy, nonatomic) NSString *toggleOnBackgroundColorStart; // @synthesize toggleOnBackgroundColorStart=_toggleOnBackgroundColorStart;
@property(readonly, nonatomic) _Bool hideIcons; // @synthesize hideIcons=_hideIcons;
@property(readonly, nonatomic) _Bool hideImage; // @synthesize hideImage=_hideImage;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(readonly, copy, nonatomic) SCCheetahCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompositeStoryId:(id)arg1 subscribed:(_Bool)arg2 iconURL:(id)arg3 text:(id)arg4 hideImage:(_Bool)arg5 hideIcons:(_Bool)arg6 toggleOnBackgroundColorStart:(id)arg7 toggleOnBackgroundColorEnd:(id)arg8 isAllEvents:(_Bool)arg9;

@end

