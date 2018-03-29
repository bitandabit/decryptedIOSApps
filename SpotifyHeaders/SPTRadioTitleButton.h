//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

#import "SPTThemableView.h"

@class NSString;

@interface SPTRadioTitleButton : UIBarButtonItem <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _icon;
}

+ (id)radioTitleButtonWithIcon:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)initWithIcon:(long long)arg1 target:(id)arg2 action:(SEL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

