//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBComponent.h"

@class NSSet, SPTArtistGLUETheme;

@interface SPTArtistPinnedItemRowHubComponent : NSObject <EXP_HUBComponent>
{
    SPTArtistGLUETheme *_theme;
}

@property(retain, nonatomic) SPTArtistGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)initWithTheme:(id)arg1;

@end

