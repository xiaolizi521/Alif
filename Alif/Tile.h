//
//  Tile.h
//  Alif
//
//  Created by Saida Memon on 4/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"

#import "constants.h"

@interface Tile : NSObject {
	int x, y, value;
	//int value;
	CCSprite *sprite;
}

@property (nonatomic, readonly) int x, y;

@property (nonatomic) int value;
@property (nonatomic, retain) CCSprite *sprite;

-(id) initWithX:(int)posX Y: (int) posY;
-(BOOL) nearTile: (Tile *)othertile;
-(void) trade:(Tile *)otherTile;
-(CGPoint) pixPosition;
@end
