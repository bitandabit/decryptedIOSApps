//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContextMenuAction.h"

@class NSString, UIImage, UIView;

@interface SPTCollectionFilterContextMenuAction : NSObject <SPTContextMenuAction>
{
    id <SPTCollectionFilterContextAction> _action;
    UIImage *_imageCache;
    UIView *_accessoryViewCache;
}

@property(retain, nonatomic) UIView *accessoryViewCache; // @synthesize accessoryViewCache=_accessoryViewCache;
@property(retain, nonatomic) UIImage *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) id <SPTCollectionFilterContextAction> action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)subtitle;
- (id)iconImage;
- (id)performAction;
- (id)title;
- (id)initWithAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

