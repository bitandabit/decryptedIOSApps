//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentActionPerformer.h"
#import "HUBComponentWithImageHandling.h"

@class NSSet, UIView;

@interface SPTCeramicVideoRowHubComponent : NSObject <HUBComponentWithImageHandling, HUBComponentActionPerformer>
{
    UIView *_view;
    id <HUBActionPerformer> _actionPerformer;
    unsigned long long _accessoryType;
}

@property(readonly, nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) __weak id <HUBActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)handleContextMenuButtonTap:(id)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureAccessoryViewInCell:(id)arg1 withModel:(id)arg2;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;
- (id)init;
- (id)initWithAccessoryType:(unsigned long long)arg1;

@end
