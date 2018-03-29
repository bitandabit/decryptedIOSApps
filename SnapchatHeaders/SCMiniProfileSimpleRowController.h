//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@class NSString, UIImage;

@interface SCMiniProfileSimpleRowController : SCMiniProfileRowController
{
    UIImage *_image;
    NSString *_text;
    NSString *_detailText;
    id _target;
    SEL _selector;
    id _userInfo;
}

@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)didSelectCell;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (id)initWithImage:(id)arg1 text:(id)arg2 detailText:(id)arg3 target:(id)arg4 selector:(SEL)arg5;

@end
