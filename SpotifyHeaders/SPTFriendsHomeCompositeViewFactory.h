//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFriendsHomeCompositeViewFactory : NSObject
{
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
}

@property(nonatomic) __weak id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (id)buildLabelForTitle:(id)arg1;
- (id)buildImageViewForURI:(id)arg1;
- (id)buildGradientView;
- (id)buildCompositeViewWithTitle:(id)arg1 imageURI:(id)arg2;
- (id)initWithGlueImageLoader:(id)arg1 glueTheme:(id)arg2;

@end
