//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBComponent.h"
#import "EXP_HUBComponentWithChildren.h"

@class NSSet, SPTFreeTierUpsellGLUETheme;

@interface SPTFreeTierUpsellArtistCarouselComponent : NSObject <EXP_HUBComponent, EXP_HUBComponentWithChildren>
{
    id <EXP_HUBComponentChildDelegate> childDelegate;
    SPTFreeTierUpsellGLUETheme *_theme;
}

@property(retain, nonatomic) SPTFreeTierUpsellGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <EXP_HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1;

@end

