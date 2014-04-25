#include <Renderer/SceneNode.hpp>
#include <SFML/Graphics.hpp>

/**
   SceneNode for SFML engine
 */
class SFMLNode : public SceneNode ,
		 public sf::Transformable,
		 public sf::Drawable,
		 public sf::NonCopyable {
public:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
  virtual void drawCurrent(sf::RenderTarget& target,
			   sf::RenderStates states) const;
  virtual void drawChildren(sf::RenderTarget& target,
			    sf::RenderStates states) const;

};
